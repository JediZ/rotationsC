\name{plot.SO3}
\alias{plot.Q4}
\alias{plot.SO3}
\title{Visualizing random rotations}
\usage{
  \method{plot}{SO3} (x, center = mean(x), col = 1,
    to_range = FALSE, show_estimates = NULL,
    label_points = NULL, mean_regions = NULL,
    median_regions = NULL, alp = NULL, m = 300,
    interactive = FALSE, ...)

  \method{plot}{Q4} (x, center = mean(x), col = 1,
    to_range = FALSE, show_estimates = NULL,
    label_points = NULL, mean_regions = NULL,
    median_regions = NULL, alp = NULL, m = 300,
    interactive = FALSE, ...)
}
\arguments{
  \item{x}{n rotations in \code{SO3} or \code{Q4} format.}

  \item{center}{rotation about which to center the
  observations.}

  \item{col}{integer or vector comprised of 1, 2, 3
  indicating which column(s) to display.  If
  \code{length(col)>1} then each eyeball is labelled with
  the corresponding axis.}

  \item{to_range}{logical; if \code{TRUE} only part of the
  globe relevant to the data is displayed}

  \item{show_estimates}{character vector to specify which
  of the four estimates of the principal direction to show.
  Possibilities are "all", "proj.mean", "proj.median",
  "geom.mean", "geom.median".}

  \item{label_points}{vector of labels.}

  \item{mean_regions}{character vector to specify which of
  the three confidence regions to show for the projected
  mean.  Possibilities are "all",
  "trans.theory","trans.bootstrap, "direct.theory",
  "direct.bootstrap".}

  \item{median_regions}{character vector to specify which
  of the three confidence regions to show for the projected
  median.  Possibilities are "all", "theory", "bootstrap."}

  \item{alp}{alpha level to be used for confidence regions.
  See \code{\link{region}} for more details.}

  \item{m}{number of bootstrap replicates to use in
  bootstrap confidence regions.}

  \item{interactive}{logical; if \code{TRUE}
  \code{sphereplot} is used to create an interactive 3D
  plot, otherwise \code{ggplot2} is used}

  \item{...}{parameters passed onto the points layer.}
}
\value{
  A visualization of rotation data.
}
\description{
  This function produces an interactive or static
  three-dimensional globe onto which one of the columns of
  the provided sample of rotations is projected.  The data
  are centered around a user-specified rotation matrix.
  The interactive plot is based on the \code{sphereplot}
  package and the static plot uses \code{ggplot2}.
}
\note{
  The option \code{interactive=TRUE} requires the
  \code{sphereplot} package.  If \code{sphereplot} is not
  available then the static plot is created.
}
\examples{
r <- rvmises(200, kappa = 1.0)
Rs <- genR(r)

plot(Rs, center = mean(Rs), show_estimates = "proj.mean", shape = 4)

\dontrun{
# Z is computed internally and contains information on depth
plot(Rs, center = mean(Rs), show_estimates = c("proj.mean", "geom.mean"),
 label_points = sample(LETTERS, 200, replace = TRUE)) + aes(size = Z, alpha = Z) +
 scale_size(limits = c(-1, 1), range = c(0.5, 2.5))

plot(Rs, center = mean(Rs), interactive = TRUE)}
}
