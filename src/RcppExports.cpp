// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// coarse_grain_cpp
arma::mat coarse_grain_cpp(arma::mat mat, int subsize);
RcppExport SEXP _spatialwarnings_coarse_grain_cpp(SEXP matSEXP, SEXP subsizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type mat(matSEXP);
    Rcpp::traits::input_parameter< int >::type subsize(subsizeSEXP);
    rcpp_result_gen = Rcpp::wrap(coarse_grain_cpp(mat, subsize));
    return rcpp_result_gen;
END_RCPP
}
// discpowerexp_norm
double discpowerexp_norm(double expo, double rate, int xmin);
RcppExport SEXP _spatialwarnings_discpowerexp_norm(SEXP expoSEXP, SEXP rateSEXP, SEXP xminSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type expo(expoSEXP);
    Rcpp::traits::input_parameter< double >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< int >::type xmin(xminSEXP);
    rcpp_result_gen = Rcpp::wrap(discpowerexp_norm(expo, rate, xmin));
    return rcpp_result_gen;
END_RCPP
}
// fl_internal
double fl_internal(arma::mat m);
RcppExport SEXP _spatialwarnings_fl_internal(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(fl_internal(m));
    return rcpp_result_gen;
END_RCPP
}
// label_cpp
IntegerMatrix label_cpp(IntegerMatrix mat, IntegerMatrix nbmask, bool wrap);
RcppExport SEXP _spatialwarnings_label_cpp(SEXP matSEXP, SEXP nbmaskSEXP, SEXP wrapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type nbmask(nbmaskSEXP);
    Rcpp::traits::input_parameter< bool >::type wrap(wrapSEXP);
    rcpp_result_gen = Rcpp::wrap(label_cpp(mat, nbmask, wrap));
    return rcpp_result_gen;
END_RCPP
}
// lerchphi
long int lerchphi(double z, double s, long int v);
RcppExport SEXP _spatialwarnings_lerchphi(SEXP zSEXP, SEXP sSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< long int >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(lerchphi(z, s, v));
    return rcpp_result_gen;
END_RCPP
}
// raw_moran
double raw_moran(arma::mat& mat);
RcppExport SEXP _spatialwarnings_raw_moran(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(raw_moran(mat));
    return rcpp_result_gen;
END_RCPP
}
// tplsum
NumericVector tplsum(double expo, double rate, IntegerVector xs, int xmin);
RcppExport SEXP _spatialwarnings_tplsum(SEXP expoSEXP, SEXP rateSEXP, SEXP xsSEXP, SEXP xminSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type expo(expoSEXP);
    Rcpp::traits::input_parameter< double >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< int >::type xmin(xminSEXP);
    rcpp_result_gen = Rcpp::wrap(tplsum(expo, rate, xs, xmin));
    return rcpp_result_gen;
END_RCPP
}
// tplinfsum
double tplinfsum(double expo, double rate, int xmin);
RcppExport SEXP _spatialwarnings_tplinfsum(SEXP expoSEXP, SEXP rateSEXP, SEXP xminSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type expo(expoSEXP);
    Rcpp::traits::input_parameter< double >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< int >::type xmin(xminSEXP);
    rcpp_result_gen = Rcpp::wrap(tplinfsum(expo, rate, xmin));
    return rcpp_result_gen;
END_RCPP
}
// shuffle_matrix
arma::mat shuffle_matrix(arma::mat& mat);
RcppExport SEXP _spatialwarnings_shuffle_matrix(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(shuffle_matrix(mat));
    return rcpp_result_gen;
END_RCPP
}
// shuffle_and_compute
List shuffle_and_compute(arma::mat& mat, Function indic, int nrep);
RcppExport SEXP _spatialwarnings_shuffle_and_compute(SEXP matSEXP, SEXP indicSEXP, SEXP nrepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< Function >::type indic(indicSEXP);
    Rcpp::traits::input_parameter< int >::type nrep(nrepSEXP);
    rcpp_result_gen = Rcpp::wrap(shuffle_and_compute(mat, indic, nrep));
    return rcpp_result_gen;
END_RCPP
}
// rspectrum
DataFrame rspectrum(arma::mat mat);
RcppExport SEXP _spatialwarnings_rspectrum(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(rspectrum(mat));
    return rcpp_result_gen;
END_RCPP
}
// cpp_skewness
double cpp_skewness(arma::vec X);
RcppExport SEXP _spatialwarnings_cpp_skewness(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_skewness(X));
    return rcpp_result_gen;
END_RCPP
}
// sum_all_one_over_k
double sum_all_one_over_k(int from, int to, double expo);
RcppExport SEXP _spatialwarnings_sum_all_one_over_k(SEXP fromSEXP, SEXP toSEXP, SEXP expoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type from(fromSEXP);
    Rcpp::traits::input_parameter< int >::type to(toSEXP);
    Rcpp::traits::input_parameter< double >::type expo(expoSEXP);
    rcpp_result_gen = Rcpp::wrap(sum_all_one_over_k(from, to, expo));
    return rcpp_result_gen;
END_RCPP
}
// sum_all_one_over_k_before
double sum_all_one_over_k_before(int n, double expo);
RcppExport SEXP _spatialwarnings_sum_all_one_over_k_before(SEXP nSEXP, SEXP expoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type expo(expoSEXP);
    rcpp_result_gen = Rcpp::wrap(sum_all_one_over_k_before(n, expo));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_spatialwarnings_coarse_grain_cpp", (DL_FUNC) &_spatialwarnings_coarse_grain_cpp, 2},
    {"_spatialwarnings_discpowerexp_norm", (DL_FUNC) &_spatialwarnings_discpowerexp_norm, 3},
    {"_spatialwarnings_fl_internal", (DL_FUNC) &_spatialwarnings_fl_internal, 1},
    {"_spatialwarnings_label_cpp", (DL_FUNC) &_spatialwarnings_label_cpp, 3},
    {"_spatialwarnings_lerchphi", (DL_FUNC) &_spatialwarnings_lerchphi, 3},
    {"_spatialwarnings_raw_moran", (DL_FUNC) &_spatialwarnings_raw_moran, 1},
    {"_spatialwarnings_tplsum", (DL_FUNC) &_spatialwarnings_tplsum, 4},
    {"_spatialwarnings_tplinfsum", (DL_FUNC) &_spatialwarnings_tplinfsum, 3},
    {"_spatialwarnings_shuffle_matrix", (DL_FUNC) &_spatialwarnings_shuffle_matrix, 1},
    {"_spatialwarnings_shuffle_and_compute", (DL_FUNC) &_spatialwarnings_shuffle_and_compute, 3},
    {"_spatialwarnings_rspectrum", (DL_FUNC) &_spatialwarnings_rspectrum, 1},
    {"_spatialwarnings_cpp_skewness", (DL_FUNC) &_spatialwarnings_cpp_skewness, 1},
    {"_spatialwarnings_sum_all_one_over_k", (DL_FUNC) &_spatialwarnings_sum_all_one_over_k, 3},
    {"_spatialwarnings_sum_all_one_over_k_before", (DL_FUNC) &_spatialwarnings_sum_all_one_over_k_before, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_spatialwarnings(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
