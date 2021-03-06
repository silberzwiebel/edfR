# This file was generated by Rcpp::compileAttributes
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

findRealBlinks <- function(starttimes, endtimes, types) {
    .Call('edfR_findRealBlinks', PACKAGE = 'edfR', starttimes, endtimes, types)
}

events2samples <- function(starttimes, endtimes, vals) {
    .Call('edfR_events2samples', PACKAGE = 'edfR', starttimes, endtimes, vals)
}

get_epochs <- function(eventtimes, samptimes, sampvals, startepoch, endepoch) {
    .Call('edfR_get_epochs', PACKAGE = 'edfR', eventtimes, samptimes, sampvals, startepoch, endepoch)
}

