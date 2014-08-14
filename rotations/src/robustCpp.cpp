
#include <RcppArmadillo.h>   
#include "../inst/include/rotations.h"

using namespace Rcpp;

// [[Rcpp::depends(RcppArmadillo)]] 

// [[Rcpp::export]]
arma::rowvec HnCpp(arma::mat Qs){
  //Compute the Hn tests statistics
  
  int n = Qs.n_rows, i=0;
  arma::mat T = Qs.t()*Qs;
  arma::mat eigvec, eigvecJ;
  arma::vec eigval, eigvalJ;
  arma::eig_sym(eigval,eigvec,T);
  arma::rowvec Hn(n);
  arma::rowvec Qj;
  arma::mat Tj;

  for(i = 0;i<n; i++){
    Qj = Qs.row(i);
    
    Tj = T-Qj.t()*Qj;
    arma::eig_sym(eigvalJ,eigvecJ,Tj);
    Hn(i)=(n-2)*(1+eigvalJ(3)-eigval(3))/(n-1-eigvalJ(3));
    
  }
  return Hn;
}

// [[Rcpp::export]]
NumericVector HnCppIntrinsic(NumericMatrix Qs){
  
  //Compute the intrinsic Hn tests statistics
  
  int n = Qs.nrow(), i=0, SSEJ = 0.0;
  NumericMatrix QsCopy;
  QsCopy = Qs;
  //Projected mean of the whole sample
  arma::mat Qsarma = Rcpp::as<arma::mat>(wrap(QsCopy));
  Rcpp::Rcout << "Qs: " << Qs << std::endl;
  arma::mat T = Qsarma.t()*Qsarma;
  arma::rowvec Qhatarma = rotations::meanQ4C(Qsarma);
  NumericVector Qhat = Rcpp::as<NumericVector>(wrap(Qhatarma));
  
  //Sum of squared geometric distances between proj. mean and each obs
  double SSE = 0.0;
  SSE = sum(pow(rotations::RdistC(Qs,Qhat),2));

  NumericVector Hn(n);
  NumericVector Qhatj;
  NumericMatrix QsJ;
  
  //Variables for arma implementation
  arma::rowvec Qj;
  arma::mat Tj(4,4), eigvecJ(4,4);
  arma::vec eigvalJ, shatJ;

  for(i = 0;i<n; i++){
    
    QsJ = Qs;
    
    //Compute projected mean when jth row is cut out
    Qj = Qsarma.row(i);
    Tj = T-Qj.t()*Qj;
    arma::eig_sym(eigvalJ,eigvecJ,Tj);
    shatJ = eigvecJ.col(3);
    if(shatJ[0]<0){
      shatJ = -shatJ;
    }
    //shatJ.print("ShatJ: ");
    Qhatj = Rcpp::as<NumericVector>(wrap(shatJ));
    
    //Replace the jth row of QsJ with the reduced sample mean
    //That way it won't contributed to reduced sample SSE called SSEJ
    QsJ(i,_) = Qhatj;
    SSEJ = sum(pow(rotations::RdistC(QsJ,Qhatj),2));
    
    //Rcpp::Rcout << "SSEJ: " << SSEJ << std::endl;
    
    Hn[i]=(n-2)*(SSE-SSEJ)/(SSEJ);
    
  }

  return Hn;
  
}

// [[Rcpp::export]]
arma::rowvec HnCppBloc(arma::mat Qs, arma::mat Cs){
  //Compute the Hn tests statistics
  
  int n = Qs.n_rows, i = 0, j = 0, rowNum = 0;
  int t = Cs.n_rows, nc = Cs.n_cols;
  //printf("nc: %i",nc);  
  //printf("t: %i",t);
  //Cs.print("Cs: ");
  
  arma::mat T = Qs.t()*Qs;
  arma::mat eigvec, eigvecJ;
  arma::vec eigval, eigvalJ;
  arma::eig_sym(eigval,eigvec,T);
  arma::rowvec Hn(nc);
  arma::mat Qj;
  Qj.zeros(t,4);
  arma::mat::fixed<4,4> Tj;

  for(i = 0;i<nc; i++){
    for(j = 0; j<t ; j++){
      
      rowNum = Cs(j,i) - 1;
      Qj.row(j) = Qs.row(rowNum);
    
      Tj = T-Qj.t()*Qj;
      arma::eig_sym(eigvalJ,eigvecJ,Tj);
      Hn(i)=(n-t-1)*(t+eigvalJ(3)-eigval(3))/(t*(n-t-eigvalJ(3)));
    }
    
  }
  return Hn;
}

