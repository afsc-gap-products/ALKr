// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// optimGascuel
double optimGascuel(NumericVector params, NumericVector lj, NumericVector li, NumericVector pi_, double threshold, int maxiter);
RcppExport SEXP _ALKr_optimGascuel(SEXP paramsSEXP, SEXP ljSEXP, SEXP liSEXP, SEXP pi_SEXP, SEXP thresholdSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lj(ljSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type li(liSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi_(pi_SEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(optimGascuel(params, lj, li, pi_, threshold, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// finalGascuel
NumericMatrix finalGascuel(NumericVector params, NumericVector lj, NumericVector li, NumericVector pi_, double threshold, int maxiter);
RcppExport SEXP _ALKr_finalGascuel(SEXP paramsSEXP, SEXP ljSEXP, SEXP liSEXP, SEXP pi_SEXP, SEXP thresholdSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lj(ljSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type li(liSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi_(pi_SEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(finalGascuel(params, lj, li, pi_, threshold, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// hoenigC
List hoenigC(List AAk, List FFik, List FFiz, int threshold, int maxiter);
RcppExport SEXP _ALKr_hoenigC(SEXP AAkSEXP, SEXP FFikSEXP, SEXP FFizSEXP, SEXP thresholdSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type AAk(AAkSEXP);
    Rcpp::traits::input_parameter< List >::type FFik(FFikSEXP);
    Rcpp::traits::input_parameter< List >::type FFiz(FFizSEXP);
    Rcpp::traits::input_parameter< int >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(hoenigC(AAk, FFik, FFiz, threshold, maxiter));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ALKr_optimGascuel", (DL_FUNC) &_ALKr_optimGascuel, 6},
    {"_ALKr_finalGascuel", (DL_FUNC) &_ALKr_finalGascuel, 6},
    {"_ALKr_hoenigC", (DL_FUNC) &_ALKr_hoenigC, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_ALKr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
