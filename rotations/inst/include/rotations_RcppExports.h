// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef __rotations_RcppExports_h__
#define __rotations_RcppExports_h__

#include <RcppArmadillo.h>
#include <Rcpp.h>

namespace rotations {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("rotations", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("rotations", "rotations_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in rotations");
            }
        }
    }

    inline arma::mat eskewC(arma::rowvec U) {
        typedef SEXP(*Ptr_eskewC)(SEXP);
        static Ptr_eskewC p_eskewC = NULL;
        if (p_eskewC == NULL) {
            validateSignature("arma::mat(*eskewC)(arma::rowvec)");
            p_eskewC = (Ptr_eskewC)R_GetCCallable("rotations", "rotations_eskewC");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_eskewC(Rcpp::wrap(U));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline arma::mat SO3defaultC(arma::mat U, arma::vec theta) {
        typedef SEXP(*Ptr_SO3defaultC)(SEXP,SEXP);
        static Ptr_SO3defaultC p_SO3defaultC = NULL;
        if (p_SO3defaultC == NULL) {
            validateSignature("arma::mat(*SO3defaultC)(arma::mat,arma::vec)");
            p_SO3defaultC = (Ptr_SO3defaultC)R_GetCCallable("rotations", "rotations_SO3defaultC");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_SO3defaultC(Rcpp::wrap(U), Rcpp::wrap(theta));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline arma::mat Q4defaultC(arma::mat U, arma::vec theta) {
        typedef SEXP(*Ptr_Q4defaultC)(SEXP,SEXP);
        static Ptr_Q4defaultC p_Q4defaultC = NULL;
        if (p_Q4defaultC == NULL) {
            validateSignature("arma::mat(*Q4defaultC)(arma::mat,arma::vec)");
            p_Q4defaultC = (Ptr_Q4defaultC)R_GetCCallable("rotations", "rotations_Q4defaultC");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_Q4defaultC(Rcpp::wrap(U), Rcpp::wrap(theta));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline arma::mat pMatC(arma::mat p) {
        typedef SEXP(*Ptr_pMatC)(SEXP);
        static Ptr_pMatC p_pMatC = NULL;
        if (p_pMatC == NULL) {
            validateSignature("arma::mat(*pMatC)(arma::mat)");
            p_pMatC = (Ptr_pMatC)R_GetCCallable("rotations", "rotations_pMatC");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_pMatC(Rcpp::wrap(p));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline arma::mat genrC(arma::vec r, arma::mat S, int SO3, arma::mat u) {
        typedef SEXP(*Ptr_genrC)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_genrC p_genrC = NULL;
        if (p_genrC == NULL) {
            validateSignature("arma::mat(*genrC)(arma::vec,arma::mat,int,arma::mat)");
            p_genrC = (Ptr_genrC)R_GetCCallable("rotations", "rotations_genrC");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_genrC(Rcpp::wrap(r), Rcpp::wrap(S), Rcpp::wrap(SO3), Rcpp::wrap(u));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline NumericVector rcayleyCpp(int n, double kappa) {
        typedef SEXP(*Ptr_rcayleyCpp)(SEXP,SEXP);
        static Ptr_rcayleyCpp p_rcayleyCpp = NULL;
        if (p_rcayleyCpp == NULL) {
            validateSignature("NumericVector(*rcayleyCpp)(int,double)");
            p_rcayleyCpp = (Ptr_rcayleyCpp)R_GetCCallable("rotations", "rotations_rcayleyCpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_rcayleyCpp(Rcpp::wrap(n), Rcpp::wrap(kappa));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector rfisherCpp(int n, double kappa) {
        typedef SEXP(*Ptr_rfisherCpp)(SEXP,SEXP);
        static Ptr_rfisherCpp p_rfisherCpp = NULL;
        if (p_rfisherCpp == NULL) {
            validateSignature("NumericVector(*rfisherCpp)(int,double)");
            p_rfisherCpp = (Ptr_rfisherCpp)R_GetCCallable("rotations", "rotations_rfisherCpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_rfisherCpp(Rcpp::wrap(n), Rcpp::wrap(kappa));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector rvmisesCPP(int n, double kappa) {
        typedef SEXP(*Ptr_rvmisesCPP)(SEXP,SEXP);
        static Ptr_rvmisesCPP p_rvmisesCPP = NULL;
        if (p_rvmisesCPP == NULL) {
            validateSignature("NumericVector(*rvmisesCPP)(int,double)");
            p_rvmisesCPP = (Ptr_rvmisesCPP)R_GetCCallable("rotations", "rotations_rvmisesCPP");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_rvmisesCPP(Rcpp::wrap(n), Rcpp::wrap(kappa));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline arma::mat centerCpp(arma::mat Rs, arma::mat S) {
        typedef SEXP(*Ptr_centerCpp)(SEXP,SEXP);
        static Ptr_centerCpp p_centerCpp = NULL;
        if (p_centerCpp == NULL) {
            validateSignature("arma::mat(*centerCpp)(arma::mat,arma::mat)");
            p_centerCpp = (Ptr_centerCpp)R_GetCCallable("rotations", "rotations_centerCpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_centerCpp(Rcpp::wrap(Rs), Rcpp::wrap(S));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline double lpvmises(arma::mat Rs, arma::mat S, double kappa) {
        typedef SEXP(*Ptr_lpvmises)(SEXP,SEXP,SEXP);
        static Ptr_lpvmises p_lpvmises = NULL;
        if (p_lpvmises == NULL) {
            validateSignature("double(*lpvmises)(arma::mat,arma::mat,double)");
            p_lpvmises = (Ptr_lpvmises)R_GetCCallable("rotations", "rotations_lpvmises");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_lpvmises(Rcpp::wrap(Rs), Rcpp::wrap(S), Rcpp::wrap(kappa));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline double lpfisher(arma::mat Rs, arma::mat S, double kappa) {
        typedef SEXP(*Ptr_lpfisher)(SEXP,SEXP,SEXP);
        static Ptr_lpfisher p_lpfisher = NULL;
        if (p_lpfisher == NULL) {
            validateSignature("double(*lpfisher)(arma::mat,arma::mat,double)");
            p_lpfisher = (Ptr_lpfisher)R_GetCCallable("rotations", "rotations_lpfisher");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_lpfisher(Rcpp::wrap(Rs), Rcpp::wrap(S), Rcpp::wrap(kappa));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline double lpcayley(arma::mat Rs, arma::mat S, double kappa) {
        typedef SEXP(*Ptr_lpcayley)(SEXP,SEXP,SEXP);
        static Ptr_lpcayley p_lpcayley = NULL;
        if (p_lpcayley == NULL) {
            validateSignature("double(*lpcayley)(arma::mat,arma::mat,double)");
            p_lpcayley = (Ptr_lpcayley)R_GetCCallable("rotations", "rotations_lpcayley");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_lpcayley(Rcpp::wrap(Rs), Rcpp::wrap(S), Rcpp::wrap(kappa));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline arma::mat S_MCMC_CPP(arma::mat Rs, arma::mat oldS, double rho, double kappa, int Dist) {
        typedef SEXP(*Ptr_S_MCMC_CPP)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_S_MCMC_CPP p_S_MCMC_CPP = NULL;
        if (p_S_MCMC_CPP == NULL) {
            validateSignature("arma::mat(*S_MCMC_CPP)(arma::mat,arma::mat,double,double,int)");
            p_S_MCMC_CPP = (Ptr_S_MCMC_CPP)R_GetCCallable("rotations", "rotations_S_MCMC_CPP");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_S_MCMC_CPP(Rcpp::wrap(Rs), Rcpp::wrap(oldS), Rcpp::wrap(rho), Rcpp::wrap(kappa), Rcpp::wrap(Dist));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline double kap_MCMC_CPP(arma::mat Rs, double oldKappa, double sigma, arma::mat S, int Dist) {
        typedef SEXP(*Ptr_kap_MCMC_CPP)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_kap_MCMC_CPP p_kap_MCMC_CPP = NULL;
        if (p_kap_MCMC_CPP == NULL) {
            validateSignature("double(*kap_MCMC_CPP)(arma::mat,double,double,arma::mat,int)");
            p_kap_MCMC_CPP = (Ptr_kap_MCMC_CPP)R_GetCCallable("rotations", "rotations_kap_MCMC_CPP");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_kap_MCMC_CPP(Rcpp::wrap(Rs), Rcpp::wrap(oldKappa), Rcpp::wrap(sigma), Rcpp::wrap(S), Rcpp::wrap(Dist));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline arma::rowvec afun_CPP(arma::mat R1, arma::mat R2) {
        typedef SEXP(*Ptr_afun_CPP)(SEXP,SEXP);
        static Ptr_afun_CPP p_afun_CPP = NULL;
        if (p_afun_CPP == NULL) {
            validateSignature("arma::rowvec(*afun_CPP)(arma::mat,arma::mat)");
            p_afun_CPP = (Ptr_afun_CPP)R_GetCCallable("rotations", "rotations_afun_CPP");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_afun_CPP(Rcpp::wrap(R1), Rcpp::wrap(R2));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::rowvec >(__result);
    }

    inline List both_MCMC_CPP(arma::mat Rs, arma::mat S0, double kappa0, double rho, double sigma, int burnin, int B, int Dist) {
        typedef SEXP(*Ptr_both_MCMC_CPP)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_both_MCMC_CPP p_both_MCMC_CPP = NULL;
        if (p_both_MCMC_CPP == NULL) {
            validateSignature("List(*both_MCMC_CPP)(arma::mat,arma::mat,double,double,double,int,int,int)");
            p_both_MCMC_CPP = (Ptr_both_MCMC_CPP)R_GetCCallable("rotations", "rotations_both_MCMC_CPP");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_both_MCMC_CPP(Rcpp::wrap(Rs), Rcpp::wrap(S0), Rcpp::wrap(kappa0), Rcpp::wrap(rho), Rcpp::wrap(sigma), Rcpp::wrap(burnin), Rcpp::wrap(B), Rcpp::wrap(Dist));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<List >(__result);
    }

    inline int checkQ4(NumericMatrix Q) {
        typedef SEXP(*Ptr_checkQ4)(SEXP);
        static Ptr_checkQ4 p_checkQ4 = NULL;
        if (p_checkQ4 == NULL) {
            validateSignature("int(*checkQ4)(NumericMatrix)");
            p_checkQ4 = (Ptr_checkQ4)R_GetCCallable("rotations", "rotations_checkQ4");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_checkQ4(Rcpp::wrap(Q));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<int >(__result);
    }

    inline int checkSO3(arma::mat Rs) {
        typedef SEXP(*Ptr_checkSO3)(SEXP);
        static Ptr_checkSO3 p_checkSO3 = NULL;
        if (p_checkSO3 == NULL) {
            validateSignature("int(*checkSO3)(arma::mat)");
            p_checkSO3 = (Ptr_checkSO3)R_GetCCallable("rotations", "rotations_checkSO3");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_checkSO3(Rcpp::wrap(Rs));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<int >(__result);
    }

    inline arma::mat expskewC(arma::mat M) {
        typedef SEXP(*Ptr_expskewC)(SEXP);
        static Ptr_expskewC p_expskewC = NULL;
        if (p_expskewC == NULL) {
            validateSignature("arma::mat(*expskewC)(arma::mat)");
            p_expskewC = (Ptr_expskewC)R_GetCCallable("rotations", "rotations_expskewC");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_expskewC(Rcpp::wrap(M));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline arma::mat expskewCMulti(arma::mat M) {
        typedef SEXP(*Ptr_expskewCMulti)(SEXP);
        static Ptr_expskewCMulti p_expskewCMulti = NULL;
        if (p_expskewCMulti == NULL) {
            validateSignature("arma::mat(*expskewCMulti)(arma::mat)");
            p_expskewCMulti = (Ptr_expskewCMulti)R_GetCCallable("rotations", "rotations_expskewCMulti");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_expskewCMulti(Rcpp::wrap(M));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline arma::mat logSO3C(arma::mat R) {
        typedef SEXP(*Ptr_logSO3C)(SEXP);
        static Ptr_logSO3C p_logSO3C = NULL;
        if (p_logSO3C == NULL) {
            validateSignature("arma::mat(*logSO3C)(arma::mat)");
            p_logSO3C = (Ptr_logSO3C)R_GetCCallable("rotations", "rotations_logSO3C");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_logSO3C(Rcpp::wrap(R));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline arma::mat logSO3CMulti(arma::mat R) {
        typedef SEXP(*Ptr_logSO3CMulti)(SEXP);
        static Ptr_logSO3CMulti p_logSO3CMulti = NULL;
        if (p_logSO3CMulti == NULL) {
            validateSignature("arma::mat(*logSO3CMulti)(arma::mat)");
            p_logSO3CMulti = (Ptr_logSO3CMulti)R_GetCCallable("rotations", "rotations_logSO3CMulti");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_logSO3CMulti(Rcpp::wrap(R));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline arma::mat projectSO3C(arma::mat M) {
        typedef SEXP(*Ptr_projectSO3C)(SEXP);
        static Ptr_projectSO3C p_projectSO3C = NULL;
        if (p_projectSO3C == NULL) {
            validateSignature("arma::mat(*projectSO3C)(arma::mat)");
            p_projectSO3C = (Ptr_projectSO3C)R_GetCCallable("rotations", "rotations_projectSO3C");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_projectSO3C(Rcpp::wrap(M));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline arma::mat meanSO3C(arma::mat Rs) {
        typedef SEXP(*Ptr_meanSO3C)(SEXP);
        static Ptr_meanSO3C p_meanSO3C = NULL;
        if (p_meanSO3C == NULL) {
            validateSignature("arma::mat(*meanSO3C)(arma::mat)");
            p_meanSO3C = (Ptr_meanSO3C)R_GetCCallable("rotations", "rotations_meanSO3C");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_meanSO3C(Rcpp::wrap(Rs));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline arma::rowvec meanQ4C(arma::mat Q) {
        typedef SEXP(*Ptr_meanQ4C)(SEXP);
        static Ptr_meanQ4C p_meanQ4C = NULL;
        if (p_meanQ4C == NULL) {
            validateSignature("arma::rowvec(*meanQ4C)(arma::mat)");
            p_meanQ4C = (Ptr_meanQ4C)R_GetCCallable("rotations", "rotations_meanQ4C");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_meanQ4C(Rcpp::wrap(Q));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::rowvec >(__result);
    }

    inline arma::mat medianSO3C(arma::mat Rs, int maxIterations, double maxEps) {
        typedef SEXP(*Ptr_medianSO3C)(SEXP,SEXP,SEXP);
        static Ptr_medianSO3C p_medianSO3C = NULL;
        if (p_medianSO3C == NULL) {
            validateSignature("arma::mat(*medianSO3C)(arma::mat,int,double)");
            p_medianSO3C = (Ptr_medianSO3C)R_GetCCallable("rotations", "rotations_medianSO3C");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_medianSO3C(Rcpp::wrap(Rs), Rcpp::wrap(maxIterations), Rcpp::wrap(maxEps));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline arma::mat HartmedianSO3C(arma::mat Rs, int maxIterations, double maxEps) {
        typedef SEXP(*Ptr_HartmedianSO3C)(SEXP,SEXP,SEXP);
        static Ptr_HartmedianSO3C p_HartmedianSO3C = NULL;
        if (p_HartmedianSO3C == NULL) {
            validateSignature("arma::mat(*HartmedianSO3C)(arma::mat,int,double)");
            p_HartmedianSO3C = (Ptr_HartmedianSO3C)R_GetCCallable("rotations", "rotations_HartmedianSO3C");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_HartmedianSO3C(Rcpp::wrap(Rs), Rcpp::wrap(maxIterations), Rcpp::wrap(maxEps));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline arma::mat gmeanSO3C(arma::mat Rs, int maxIterations, double maxEps) {
        typedef SEXP(*Ptr_gmeanSO3C)(SEXP,SEXP,SEXP);
        static Ptr_gmeanSO3C p_gmeanSO3C = NULL;
        if (p_gmeanSO3C == NULL) {
            validateSignature("arma::mat(*gmeanSO3C)(arma::mat,int,double)");
            p_gmeanSO3C = (Ptr_gmeanSO3C)R_GetCCallable("rotations", "rotations_gmeanSO3C");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_gmeanSO3C(Rcpp::wrap(Rs), Rcpp::wrap(maxIterations), Rcpp::wrap(maxEps));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline double fisherAxisC(arma::mat Qs, arma::rowvec Qhat) {
        typedef SEXP(*Ptr_fisherAxisC)(SEXP,SEXP);
        static Ptr_fisherAxisC p_fisherAxisC = NULL;
        if (p_fisherAxisC == NULL) {
            validateSignature("double(*fisherAxisC)(arma::mat,arma::rowvec)");
            p_fisherAxisC = (Ptr_fisherAxisC)R_GetCCallable("rotations", "rotations_fisherAxisC");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_fisherAxisC(Rcpp::wrap(Qs), Rcpp::wrap(Qhat));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline double fisherAxisCSymmetric(arma::mat Qs, arma::rowvec Qhat) {
        typedef SEXP(*Ptr_fisherAxisCSymmetric)(SEXP,SEXP);
        static Ptr_fisherAxisCSymmetric p_fisherAxisCSymmetric = NULL;
        if (p_fisherAxisCSymmetric == NULL) {
            validateSignature("double(*fisherAxisCSymmetric)(arma::mat,arma::rowvec)");
            p_fisherAxisCSymmetric = (Ptr_fisherAxisCSymmetric)R_GetCCallable("rotations", "rotations_fisherAxisCSymmetric");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_fisherAxisCSymmetric(Rcpp::wrap(Qs), Rcpp::wrap(Qhat));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline arma::vec fisherBootC(arma::mat Qs, int m, bool symm) {
        typedef SEXP(*Ptr_fisherBootC)(SEXP,SEXP,SEXP);
        static Ptr_fisherBootC p_fisherBootC = NULL;
        if (p_fisherBootC == NULL) {
            validateSignature("arma::vec(*fisherBootC)(arma::mat,int,bool)");
            p_fisherBootC = (Ptr_fisherBootC)R_GetCCallable("rotations", "rotations_fisherBootC");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_fisherBootC(Rcpp::wrap(Qs), Rcpp::wrap(m), Rcpp::wrap(symm));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::vec >(__result);
    }

    inline arma::rowvec HnCpp(arma::mat Qs) {
        typedef SEXP(*Ptr_HnCpp)(SEXP);
        static Ptr_HnCpp p_HnCpp = NULL;
        if (p_HnCpp == NULL) {
            validateSignature("arma::rowvec(*HnCpp)(arma::mat)");
            p_HnCpp = (Ptr_HnCpp)R_GetCCallable("rotations", "rotations_HnCpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_HnCpp(Rcpp::wrap(Qs));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::rowvec >(__result);
    }

    inline arma::rowvec HnCppIntrinsic(arma::mat Qs) {
        typedef SEXP(*Ptr_HnCppIntrinsic)(SEXP);
        static Ptr_HnCppIntrinsic p_HnCppIntrinsic = NULL;
        if (p_HnCppIntrinsic == NULL) {
            validateSignature("arma::rowvec(*HnCppIntrinsic)(arma::mat)");
            p_HnCppIntrinsic = (Ptr_HnCppIntrinsic)R_GetCCallable("rotations", "rotations_HnCppIntrinsic");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_HnCppIntrinsic(Rcpp::wrap(Qs));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::rowvec >(__result);
    }

    inline arma::rowvec HnCppBloc(arma::mat Qs, arma::mat Cs) {
        typedef SEXP(*Ptr_HnCppBloc)(SEXP,SEXP);
        static Ptr_HnCppBloc p_HnCppBloc = NULL;
        if (p_HnCppBloc == NULL) {
            validateSignature("arma::rowvec(*HnCppBloc)(arma::mat,arma::mat)");
            p_HnCppBloc = (Ptr_HnCppBloc)R_GetCCallable("rotations", "rotations_HnCppBloc");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_HnCppBloc(Rcpp::wrap(Qs), Rcpp::wrap(Cs));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::rowvec >(__result);
    }

    inline NumericVector RdistC(NumericMatrix Q1, NumericVector Q2) {
        typedef SEXP(*Ptr_RdistC)(SEXP,SEXP);
        static Ptr_RdistC p_RdistC = NULL;
        if (p_RdistC == NULL) {
            validateSignature("NumericVector(*RdistC)(NumericMatrix,NumericVector)");
            p_RdistC = (Ptr_RdistC)R_GetCCallable("rotations", "rotations_RdistC");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RdistC(Rcpp::wrap(Q1), Rcpp::wrap(Q2));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline arma::rowvec rdistSO3C(arma::mat Rs, arma::mat R2) {
        typedef SEXP(*Ptr_rdistSO3C)(SEXP,SEXP);
        static Ptr_rdistSO3C p_rdistSO3C = NULL;
        if (p_rdistSO3C == NULL) {
            validateSignature("arma::rowvec(*rdistSO3C)(arma::mat,arma::mat)");
            p_rdistSO3C = (Ptr_rdistSO3C)R_GetCCallable("rotations", "rotations_rdistSO3C");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_rdistSO3C(Rcpp::wrap(Rs), Rcpp::wrap(R2));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::rowvec >(__result);
    }

    inline NumericVector EdistC(NumericMatrix Q1, NumericVector Q2) {
        typedef SEXP(*Ptr_EdistC)(SEXP,SEXP);
        static Ptr_EdistC p_EdistC = NULL;
        if (p_EdistC == NULL) {
            validateSignature("NumericVector(*EdistC)(NumericMatrix,NumericVector)");
            p_EdistC = (Ptr_EdistC)R_GetCCallable("rotations", "rotations_EdistC");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_EdistC(Rcpp::wrap(Q1), Rcpp::wrap(Q2));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline double oneRdistC(NumericMatrix Q1, NumericVector Q2) {
        typedef SEXP(*Ptr_oneRdistC)(SEXP,SEXP);
        static Ptr_oneRdistC p_oneRdistC = NULL;
        if (p_oneRdistC == NULL) {
            validateSignature("double(*oneRdistC)(NumericMatrix,NumericVector)");
            p_oneRdistC = (Ptr_oneRdistC)R_GetCCallable("rotations", "rotations_oneRdistC");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_oneRdistC(Rcpp::wrap(Q1), Rcpp::wrap(Q2));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline NumericVector cdfunsC(NumericMatrix Qs, NumericVector Qhat) {
        typedef SEXP(*Ptr_cdfunsC)(SEXP,SEXP);
        static Ptr_cdfunsC p_cdfunsC = NULL;
        if (p_cdfunsC == NULL) {
            validateSignature("NumericVector(*cdfunsC)(NumericMatrix,NumericVector)");
            p_cdfunsC = (Ptr_cdfunsC)R_GetCCallable("rotations", "rotations_cdfunsC");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_cdfunsC(Rcpp::wrap(Qs), Rcpp::wrap(Qhat));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector cdfunsCMedian(NumericMatrix Qs, NumericVector Qhat) {
        typedef SEXP(*Ptr_cdfunsCMedian)(SEXP,SEXP);
        static Ptr_cdfunsCMedian p_cdfunsCMedian = NULL;
        if (p_cdfunsCMedian == NULL) {
            validateSignature("NumericVector(*cdfunsCMedian)(NumericMatrix,NumericVector)");
            p_cdfunsCMedian = (Ptr_cdfunsCMedian)R_GetCCallable("rotations", "rotations_cdfunsCMedian");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_cdfunsCMedian(Rcpp::wrap(Qs), Rcpp::wrap(Qhat));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector zhangQ4(NumericMatrix Q, int m) {
        typedef SEXP(*Ptr_zhangQ4)(SEXP,SEXP);
        static Ptr_zhangQ4 p_zhangQ4 = NULL;
        if (p_zhangQ4 == NULL) {
            validateSignature("NumericVector(*zhangQ4)(NumericMatrix,int)");
            p_zhangQ4 = (Ptr_zhangQ4)R_GetCCallable("rotations", "rotations_zhangQ4");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_zhangQ4(Rcpp::wrap(Q), Rcpp::wrap(m));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector cdfunsCSO3(arma::mat Rs, arma::mat Rhat) {
        typedef SEXP(*Ptr_cdfunsCSO3)(SEXP,SEXP);
        static Ptr_cdfunsCSO3 p_cdfunsCSO3 = NULL;
        if (p_cdfunsCSO3 == NULL) {
            validateSignature("NumericVector(*cdfunsCSO3)(arma::mat,arma::mat)");
            p_cdfunsCSO3 = (Ptr_cdfunsCSO3)R_GetCCallable("rotations", "rotations_cdfunsCSO3");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_cdfunsCSO3(Rcpp::wrap(Rs), Rcpp::wrap(Rhat));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector zhangMedianC(arma::mat Rs, int m) {
        typedef SEXP(*Ptr_zhangMedianC)(SEXP,SEXP);
        static Ptr_zhangMedianC p_zhangMedianC = NULL;
        if (p_zhangMedianC == NULL) {
            validateSignature("NumericVector(*zhangMedianC)(arma::mat,int)");
            p_zhangMedianC = (Ptr_zhangMedianC)R_GetCCallable("rotations", "rotations_zhangMedianC");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_zhangMedianC(Rcpp::wrap(Rs), Rcpp::wrap(m));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

}

#endif // __rotations_RcppExports_h__
