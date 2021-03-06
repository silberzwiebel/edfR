// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// findRealBlinks
DataFrame findRealBlinks(NumericVector starttimes, NumericVector endtimes, NumericVector types);
RcppExport SEXP edfR_findRealBlinks(SEXP starttimesSEXP, SEXP endtimesSEXP, SEXP typesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type starttimes(starttimesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type endtimes(endtimesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type types(typesSEXP);
    __result = Rcpp::wrap(findRealBlinks(starttimes, endtimes, types));
    return __result;
END_RCPP
}
// events2samples
arma::mat events2samples(NumericVector starttimes, NumericVector endtimes, NumericVector vals);
RcppExport SEXP edfR_events2samples(SEXP starttimesSEXP, SEXP endtimesSEXP, SEXP valsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type starttimes(starttimesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type endtimes(endtimesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vals(valsSEXP);
    __result = Rcpp::wrap(events2samples(starttimes, endtimes, vals));
    return __result;
END_RCPP
}
// get_epochs
arma::mat get_epochs(NumericVector eventtimes, NumericVector samptimes, NumericVector sampvals, int startepoch, int endepoch);
RcppExport SEXP edfR_get_epochs(SEXP eventtimesSEXP, SEXP samptimesSEXP, SEXP sampvalsSEXP, SEXP startepochSEXP, SEXP endepochSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type eventtimes(eventtimesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type samptimes(samptimesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sampvals(sampvalsSEXP);
    Rcpp::traits::input_parameter< int >::type startepoch(startepochSEXP);
    Rcpp::traits::input_parameter< int >::type endepoch(endepochSEXP);
    __result = Rcpp::wrap(get_epochs(eventtimes, samptimes, sampvals, startepoch, endepoch));
    return __result;
END_RCPP
}
