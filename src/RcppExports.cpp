// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// foo
void foo();
RcppExport SEXP _RcppArray_foo() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    foo();
    return R_NilValue;
END_RCPP
}
// bar
RObject bar();
RcppExport SEXP _RcppArray_bar() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(bar());
    return rcpp_result_gen;
END_RCPP
}
// baz
RObject baz();
RcppExport SEXP _RcppArray_baz() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(baz());
    return rcpp_result_gen;
END_RCPP
}
// intArray
void intArray(RObject x);
RcppExport SEXP _RcppArray_intArray(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    intArray(x);
    return R_NilValue;
END_RCPP
}
// unsignedArray
void unsignedArray(RObject x);
RcppExport SEXP _RcppArray_unsignedArray(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    unsignedArray(x);
    return R_NilValue;
END_RCPP
}
// doubleArray
void doubleArray(RObject x);
RcppExport SEXP _RcppArray_doubleArray(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    doubleArray(x);
    return R_NilValue;
END_RCPP
}
// stringArray
void stringArray(RObject x);
RcppExport SEXP _RcppArray_stringArray(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    stringArray(x);
    return R_NilValue;
END_RCPP
}
// int64Array
void int64Array(RObject x);
RcppExport SEXP _RcppArray_int64Array(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    int64Array(x);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppArray_foo", (DL_FUNC) &_RcppArray_foo, 0},
    {"_RcppArray_bar", (DL_FUNC) &_RcppArray_bar, 0},
    {"_RcppArray_baz", (DL_FUNC) &_RcppArray_baz, 0},
    {"_RcppArray_intArray", (DL_FUNC) &_RcppArray_intArray, 1},
    {"_RcppArray_unsignedArray", (DL_FUNC) &_RcppArray_unsignedArray, 1},
    {"_RcppArray_doubleArray", (DL_FUNC) &_RcppArray_doubleArray, 1},
    {"_RcppArray_stringArray", (DL_FUNC) &_RcppArray_stringArray, 1},
    {"_RcppArray_int64Array", (DL_FUNC) &_RcppArray_int64Array, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppArray(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
