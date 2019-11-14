// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// conditional_probabilities_mrf
NumericVector conditional_probabilities_mrf(const IntegerMatrix& Z, const IntegerVector position, const IntegerMatrix R, const arma::fcube& theta, const int N, const int M, const int n_R, const int C);
RcppExport SEXP _mrf2d_conditional_probabilities_mrf(SEXP ZSEXP, SEXP positionSEXP, SEXP RSEXP, SEXP thetaSEXP, SEXP NSEXP, SEXP MSEXP, SEXP n_RSEXP, SEXP CSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type position(positionSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type R(RSEXP);
    Rcpp::traits::input_parameter< const arma::fcube& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const int >::type N(NSEXP);
    Rcpp::traits::input_parameter< const int >::type M(MSEXP);
    Rcpp::traits::input_parameter< const int >::type n_R(n_RSEXP);
    Rcpp::traits::input_parameter< const int >::type C(CSEXP);
    rcpp_result_gen = Rcpp::wrap(conditional_probabilities_mrf(Z, position, R, theta, N, M, n_R, C));
    return rcpp_result_gen;
END_RCPP
}
// conditional_probabilities_mrf_sub
NumericVector conditional_probabilities_mrf_sub(const IntegerMatrix& Z, const LogicalMatrix& sub_mat, const IntegerVector position, const IntegerMatrix R, const arma::fcube& theta, const int N, const int M, const int n_R, const int C);
RcppExport SEXP _mrf2d_conditional_probabilities_mrf_sub(SEXP ZSEXP, SEXP sub_matSEXP, SEXP positionSEXP, SEXP RSEXP, SEXP thetaSEXP, SEXP NSEXP, SEXP MSEXP, SEXP n_RSEXP, SEXP CSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const LogicalMatrix& >::type sub_mat(sub_matSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type position(positionSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type R(RSEXP);
    Rcpp::traits::input_parameter< const arma::fcube& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const int >::type N(NSEXP);
    Rcpp::traits::input_parameter< const int >::type M(MSEXP);
    Rcpp::traits::input_parameter< const int >::type n_R(n_RSEXP);
    Rcpp::traits::input_parameter< const int >::type C(CSEXP);
    rcpp_result_gen = Rcpp::wrap(conditional_probabilities_mrf_sub(Z, sub_mat, position, R, theta, N, M, n_R, C));
    return rcpp_result_gen;
END_RCPP
}
// icm_restoration_cpp
IntegerMatrix icm_restoration_cpp(const IntegerMatrix& init_Z, const IntegerMatrix R, const arma::fcube& theta, const double corr_prob, const int cycles);
RcppExport SEXP _mrf2d_icm_restoration_cpp(SEXP init_ZSEXP, SEXP RSEXP, SEXP thetaSEXP, SEXP corr_probSEXP, SEXP cyclesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type init_Z(init_ZSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type R(RSEXP);
    Rcpp::traits::input_parameter< const arma::fcube& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const double >::type corr_prob(corr_probSEXP);
    Rcpp::traits::input_parameter< const int >::type cycles(cyclesSEXP);
    rcpp_result_gen = Rcpp::wrap(icm_restoration_cpp(init_Z, R, theta, corr_prob, cycles));
    return rcpp_result_gen;
END_RCPP
}
// cprob_ghm_one
NumericVector cprob_ghm_one(const IntegerMatrix& Z, const IntegerVector position, const IntegerMatrix R, const arma::fcube& theta, const int N, const int M, const int n_R, const int C, const NumericVector mus, const NumericVector sigmas, const NumericMatrix& Y);
RcppExport SEXP _mrf2d_cprob_ghm_one(SEXP ZSEXP, SEXP positionSEXP, SEXP RSEXP, SEXP thetaSEXP, SEXP NSEXP, SEXP MSEXP, SEXP n_RSEXP, SEXP CSEXP, SEXP musSEXP, SEXP sigmasSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type position(positionSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type R(RSEXP);
    Rcpp::traits::input_parameter< const arma::fcube& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const int >::type N(NSEXP);
    Rcpp::traits::input_parameter< const int >::type M(MSEXP);
    Rcpp::traits::input_parameter< const int >::type n_R(n_RSEXP);
    Rcpp::traits::input_parameter< const int >::type C(CSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type mus(musSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type sigmas(sigmasSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(cprob_ghm_one(Z, position, R, theta, N, M, n_R, C, mus, sigmas, Y));
    return rcpp_result_gen;
END_RCPP
}
// cprob_ghm_one_sub
NumericVector cprob_ghm_one_sub(const IntegerMatrix& Z, const LogicalMatrix& sub_mat, const IntegerVector position, const IntegerMatrix R, const arma::fcube& theta, const int N, const int M, const int n_R, const int C, const NumericVector mus, const NumericVector sigmas, const NumericMatrix Y);
RcppExport SEXP _mrf2d_cprob_ghm_one_sub(SEXP ZSEXP, SEXP sub_matSEXP, SEXP positionSEXP, SEXP RSEXP, SEXP thetaSEXP, SEXP NSEXP, SEXP MSEXP, SEXP n_RSEXP, SEXP CSEXP, SEXP musSEXP, SEXP sigmasSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const LogicalMatrix& >::type sub_mat(sub_matSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type position(positionSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type R(RSEXP);
    Rcpp::traits::input_parameter< const arma::fcube& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const int >::type N(NSEXP);
    Rcpp::traits::input_parameter< const int >::type M(MSEXP);
    Rcpp::traits::input_parameter< const int >::type n_R(n_RSEXP);
    Rcpp::traits::input_parameter< const int >::type C(CSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type mus(musSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type sigmas(sigmasSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(cprob_ghm_one_sub(Z, sub_mat, position, R, theta, N, M, n_R, C, mus, sigmas, Y));
    return rcpp_result_gen;
END_RCPP
}
// cprob_ghm_all
arma::fcube cprob_ghm_all(const IntegerMatrix& Z, const IntegerMatrix R, const arma::fcube& theta, const NumericVector mus, const NumericVector sigmas, const NumericMatrix& Y);
RcppExport SEXP _mrf2d_cprob_ghm_all(SEXP ZSEXP, SEXP RSEXP, SEXP thetaSEXP, SEXP musSEXP, SEXP sigmasSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type R(RSEXP);
    Rcpp::traits::input_parameter< const arma::fcube& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type mus(musSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type sigmas(sigmasSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(cprob_ghm_all(Z, R, theta, mus, sigmas, Y));
    return rcpp_result_gen;
END_RCPP
}
// cprob_ghm_all_sub
arma::fcube cprob_ghm_all_sub(const IntegerMatrix& Z, const LogicalMatrix& sub_mat, const IntegerMatrix R, const arma::fcube& theta, const NumericVector mus, const NumericVector sigmas, const NumericMatrix& Y);
RcppExport SEXP _mrf2d_cprob_ghm_all_sub(SEXP ZSEXP, SEXP sub_matSEXP, SEXP RSEXP, SEXP thetaSEXP, SEXP musSEXP, SEXP sigmasSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const LogicalMatrix& >::type sub_mat(sub_matSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type R(RSEXP);
    Rcpp::traits::input_parameter< const arma::fcube& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type mus(musSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type sigmas(sigmasSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(cprob_ghm_all_sub(Z, sub_mat, R, theta, mus, sigmas, Y));
    return rcpp_result_gen;
END_RCPP
}
// icm_gaussian_cpp
IntegerMatrix icm_gaussian_cpp(const NumericMatrix& Y, const IntegerMatrix R, const IntegerMatrix& init_Z, const arma::fcube& theta, const NumericVector mus, const NumericVector sigmas, const int cycles);
RcppExport SEXP _mrf2d_icm_gaussian_cpp(SEXP YSEXP, SEXP RSEXP, SEXP init_ZSEXP, SEXP thetaSEXP, SEXP musSEXP, SEXP sigmasSEXP, SEXP cyclesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type R(RSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type init_Z(init_ZSEXP);
    Rcpp::traits::input_parameter< const arma::fcube& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type mus(musSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type sigmas(sigmasSEXP);
    Rcpp::traits::input_parameter< const int >::type cycles(cyclesSEXP);
    rcpp_result_gen = Rcpp::wrap(icm_gaussian_cpp(Y, R, init_Z, theta, mus, sigmas, cycles));
    return rcpp_result_gen;
END_RCPP
}
// icm_gaussian_cpp_sub
IntegerMatrix icm_gaussian_cpp_sub(const NumericMatrix& Y, const LogicalMatrix& sub_mat, const IntegerMatrix R, const IntegerMatrix& init_Z, const arma::fcube& theta, const NumericVector mus, const NumericVector sigmas, const int cycles);
RcppExport SEXP _mrf2d_icm_gaussian_cpp_sub(SEXP YSEXP, SEXP sub_matSEXP, SEXP RSEXP, SEXP init_ZSEXP, SEXP thetaSEXP, SEXP musSEXP, SEXP sigmasSEXP, SEXP cyclesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const LogicalMatrix& >::type sub_mat(sub_matSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type R(RSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type init_Z(init_ZSEXP);
    Rcpp::traits::input_parameter< const arma::fcube& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type mus(musSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type sigmas(sigmasSEXP);
    Rcpp::traits::input_parameter< const int >::type cycles(cyclesSEXP);
    rcpp_result_gen = Rcpp::wrap(icm_gaussian_cpp_sub(Y, sub_mat, R, init_Z, theta, mus, sigmas, cycles));
    return rcpp_result_gen;
END_RCPP
}
// gibbs_sampler_mrf2d
IntegerMatrix gibbs_sampler_mrf2d(const IntegerMatrix& init_Z, const IntegerMatrix R, const arma::fcube& theta, const int n_steps);
RcppExport SEXP _mrf2d_gibbs_sampler_mrf2d(SEXP init_ZSEXP, SEXP RSEXP, SEXP thetaSEXP, SEXP n_stepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type init_Z(init_ZSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type R(RSEXP);
    Rcpp::traits::input_parameter< const arma::fcube& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const int >::type n_steps(n_stepsSEXP);
    rcpp_result_gen = Rcpp::wrap(gibbs_sampler_mrf2d(init_Z, R, theta, n_steps));
    return rcpp_result_gen;
END_RCPP
}
// gibbs_sampler_mrf2d_sub
IntegerMatrix gibbs_sampler_mrf2d_sub(const IntegerMatrix& init_Z, const LogicalMatrix& sub_mat, const LogicalMatrix& fix_mat, const IntegerMatrix R, const arma::fcube& theta, const int n_steps);
RcppExport SEXP _mrf2d_gibbs_sampler_mrf2d_sub(SEXP init_ZSEXP, SEXP sub_matSEXP, SEXP fix_matSEXP, SEXP RSEXP, SEXP thetaSEXP, SEXP n_stepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type init_Z(init_ZSEXP);
    Rcpp::traits::input_parameter< const LogicalMatrix& >::type sub_mat(sub_matSEXP);
    Rcpp::traits::input_parameter< const LogicalMatrix& >::type fix_mat(fix_matSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type R(RSEXP);
    Rcpp::traits::input_parameter< const arma::fcube& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const int >::type n_steps(n_stepsSEXP);
    rcpp_result_gen = Rcpp::wrap(gibbs_sampler_mrf2d_sub(init_Z, sub_mat, fix_mat, R, theta, n_steps));
    return rcpp_result_gen;
END_RCPP
}
// table_relative
arma::dmat table_relative(const IntegerMatrix& Z, IntegerVector r, int C);
RcppExport SEXP _mrf2d_table_relative(SEXP ZSEXP, SEXP rSEXP, SEXP CSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type C(CSEXP);
    rcpp_result_gen = Rcpp::wrap(table_relative(Z, r, C));
    return rcpp_result_gen;
END_RCPP
}
// table_relative_3d
arma::dcube table_relative_3d(const IntegerMatrix& Z, IntegerMatrix R, int C);
RcppExport SEXP _mrf2d_table_relative_3d(SEXP ZSEXP, SEXP RSEXP, SEXP CSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type R(RSEXP);
    Rcpp::traits::input_parameter< int >::type C(CSEXP);
    rcpp_result_gen = Rcpp::wrap(table_relative_3d(Z, R, C));
    return rcpp_result_gen;
END_RCPP
}
// log_pl_mrf
double log_pl_mrf(const IntegerMatrix Z, const IntegerMatrix R, const arma::fcube theta);
RcppExport SEXP _mrf2d_log_pl_mrf(SEXP ZSEXP, SEXP RSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type R(RSEXP);
    Rcpp::traits::input_parameter< const arma::fcube >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(log_pl_mrf(Z, R, theta));
    return rcpp_result_gen;
END_RCPP
}
// log_pl_mrf_sub
double log_pl_mrf_sub(const IntegerMatrix Z, const LogicalMatrix sub_mat, const IntegerMatrix R, const arma::fcube theta);
RcppExport SEXP _mrf2d_log_pl_mrf_sub(SEXP ZSEXP, SEXP sub_matSEXP, SEXP RSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const LogicalMatrix >::type sub_mat(sub_matSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type R(RSEXP);
    Rcpp::traits::input_parameter< const arma::fcube >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(log_pl_mrf_sub(Z, sub_mat, R, theta));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mrf2d_conditional_probabilities_mrf", (DL_FUNC) &_mrf2d_conditional_probabilities_mrf, 8},
    {"_mrf2d_conditional_probabilities_mrf_sub", (DL_FUNC) &_mrf2d_conditional_probabilities_mrf_sub, 9},
    {"_mrf2d_icm_restoration_cpp", (DL_FUNC) &_mrf2d_icm_restoration_cpp, 5},
    {"_mrf2d_cprob_ghm_one", (DL_FUNC) &_mrf2d_cprob_ghm_one, 11},
    {"_mrf2d_cprob_ghm_one_sub", (DL_FUNC) &_mrf2d_cprob_ghm_one_sub, 12},
    {"_mrf2d_cprob_ghm_all", (DL_FUNC) &_mrf2d_cprob_ghm_all, 6},
    {"_mrf2d_cprob_ghm_all_sub", (DL_FUNC) &_mrf2d_cprob_ghm_all_sub, 7},
    {"_mrf2d_icm_gaussian_cpp", (DL_FUNC) &_mrf2d_icm_gaussian_cpp, 7},
    {"_mrf2d_icm_gaussian_cpp_sub", (DL_FUNC) &_mrf2d_icm_gaussian_cpp_sub, 8},
    {"_mrf2d_gibbs_sampler_mrf2d", (DL_FUNC) &_mrf2d_gibbs_sampler_mrf2d, 4},
    {"_mrf2d_gibbs_sampler_mrf2d_sub", (DL_FUNC) &_mrf2d_gibbs_sampler_mrf2d_sub, 6},
    {"_mrf2d_table_relative", (DL_FUNC) &_mrf2d_table_relative, 3},
    {"_mrf2d_table_relative_3d", (DL_FUNC) &_mrf2d_table_relative_3d, 3},
    {"_mrf2d_log_pl_mrf", (DL_FUNC) &_mrf2d_log_pl_mrf, 3},
    {"_mrf2d_log_pl_mrf_sub", (DL_FUNC) &_mrf2d_log_pl_mrf_sub, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_mrf2d(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}