#' @name mrf2d-family
#' @author Victor Freguglia
#' @title Parameter restriction families
#'
#' @description Different parameter restrictions can be included in estimation processes
#' to make sure `mrf2d` can successfully include a wide range of model types in
#' its inference functions.
#'
#' For model identifiability, at least one linear restriction is necessary.
#' `mrf2d` always assume \eqn{\theta_{0,0,r} = 0} for all relative positions
#' \eqn{r}.
#'
#' Additionally, each family of restrictions may introduce other restrictions:
#'
#' @section 'onepar':
#'  This family assumes the model is defined by a single parameter
#'  by adding the restriction
#'
#'  \deqn{\theta_{a,b,r} = \phi * 1(a != b).}
#'
#'  Here \eqn{1()} denotes de indicator function. In words, the parameter must
#'  be the same value for any pair with different values and 0 for any
#'  equal-valued pair.
#'
#' @section 'oneeach':
#'  Similar to `'onepar'`, parameters are 0 for equal-valued pairs and a
#'  constant for pairs with different values, but the constant may differ
#'  between different relative positions \eqn{r}:
#'
#'  \deqn{\theta{a,b,r} = \phi_r * 1(a != b).}
#'
#' @section 'absdif':
#'  All parameters \eqn{\theta_{a,b,r}} with the same absolute difference
#'  between \eqn{a} and \eqn{b} must be equal within each relative position
#'  \eqn{r}. (Note that `'absdif'` is equal to `'oneeach'` for binary images).
#'
#'  \deqn{\theta_{a,b,r} = \sum_d \phi_{d,r} * 1(|a-b| == d)}
#'
#' @section 'dif':
#'  The same as `'absdif'`, but parameters may differ between positive and
#'  negative differences.
#'
#'  \deqn{\theta_{a,b,r} = \sum_d \phi_{d,r} * 1(a-b == d)}
#'
#' @section 'free':
#'  No additional restriction, all parameters other than \eqn{\theta_{0,0,r}}
#'  vary freely.
#'
#' @seealso
#' \code{vignette("mrf2d-family", package = "mrf2d")}
#'
#' A paper with detailed description of the package can be found at
#' \doi{10.18637/jss.v101.i08}.
NULL

mrf2d_families <- c("onepar", "oneeach", "absdif", "dif", "symmetric", "free")
