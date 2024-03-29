// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// merge_KC_clusters
CharacterVector merge_KC_clusters(const CharacterVector& vect, CharacterVector& keys_vect, const CharacterVector& dict, const CharacterVector& keys_dict);
RcppExport SEXP _refinr_merge_KC_clusters(SEXP vectSEXP, SEXP keys_vectSEXP, SEXP dictSEXP, SEXP keys_dictSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CharacterVector& >::type vect(vectSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type keys_vect(keys_vectSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type keys_dict(keys_dictSEXP);
    rcpp_result_gen = Rcpp::wrap(merge_KC_clusters(vect, keys_vect, dict, keys_dict));
    return rcpp_result_gen;
END_RCPP
}
// ngram_merge_no_approx
CharacterVector ngram_merge_no_approx(CharacterVector& n_gram_keys, const CharacterVector& univect, CharacterVector& vect);
RcppExport SEXP _refinr_ngram_merge_no_approx(SEXP n_gram_keysSEXP, SEXP univectSEXP, SEXP vectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector& >::type n_gram_keys(n_gram_keysSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type univect(univectSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type vect(vectSEXP);
    rcpp_result_gen = Rcpp::wrap(ngram_merge_no_approx(n_gram_keys, univect, vect));
    return rcpp_result_gen;
END_RCPP
}
// ngram_merge_approx
CharacterVector ngram_merge_approx(CharacterVector& n_gram_keys, CharacterVector& one_gram_keys, const CharacterVector& univect, CharacterVector& vect, const double& edit_threshold, const SEXP& method, const SEXP& weight, const SEXP& p, const SEXP& bt, const SEXP& q, const SEXP& useBytes, const SEXP& nthread);
RcppExport SEXP _refinr_ngram_merge_approx(SEXP n_gram_keysSEXP, SEXP one_gram_keysSEXP, SEXP univectSEXP, SEXP vectSEXP, SEXP edit_thresholdSEXP, SEXP methodSEXP, SEXP weightSEXP, SEXP pSEXP, SEXP btSEXP, SEXP qSEXP, SEXP useBytesSEXP, SEXP nthreadSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector& >::type n_gram_keys(n_gram_keysSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type one_gram_keys(one_gram_keysSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type univect(univectSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type vect(vectSEXP);
    Rcpp::traits::input_parameter< const double& >::type edit_threshold(edit_thresholdSEXP);
    Rcpp::traits::input_parameter< const SEXP& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const SEXP& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< const SEXP& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const SEXP& >::type bt(btSEXP);
    Rcpp::traits::input_parameter< const SEXP& >::type q(qSEXP);
    Rcpp::traits::input_parameter< const SEXP& >::type useBytes(useBytesSEXP);
    Rcpp::traits::input_parameter< const SEXP& >::type nthread(nthreadSEXP);
    rcpp_result_gen = Rcpp::wrap(ngram_merge_approx(n_gram_keys, one_gram_keys, univect, vect, edit_threshold, method, weight, p, bt, q, useBytes, nthread));
    return rcpp_result_gen;
END_RCPP
}
// cpp_get_char_ngrams
CharacterVector cpp_get_char_ngrams(const std::vector<std::string>& vects, const int& numgram);
RcppExport SEXP _refinr_cpp_get_char_ngrams(SEXP vectsSEXP, SEXP numgramSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type vects(vectsSEXP);
    Rcpp::traits::input_parameter< const int& >::type numgram(numgramSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_get_char_ngrams(vects, numgram));
    return rcpp_result_gen;
END_RCPP
}
// cpp_tolower
CharacterVector cpp_tolower(const CharacterVector& x);
RcppExport SEXP _refinr_cpp_tolower(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CharacterVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_tolower(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_paste_list
CharacterVector cpp_paste_list(List& input, const std::string& collapse_str);
RcppExport SEXP _refinr_cpp_paste_list(SEXP inputSEXP, SEXP collapse_strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type input(inputSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type collapse_str(collapse_strSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_paste_list(input, collapse_str));
    return rcpp_result_gen;
END_RCPP
}
// cpp_list_unique
List cpp_list_unique(List& input, const bool& sort_vals);
RcppExport SEXP _refinr_cpp_list_unique(SEXP inputSEXP, SEXP sort_valsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type input(inputSEXP);
    Rcpp::traits::input_parameter< const bool& >::type sort_vals(sort_valsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_list_unique(input, sort_vals));
    return rcpp_result_gen;
END_RCPP
}
// remove_strings
List remove_strings(List& input, std::vector<std::string>& removes);
RcppExport SEXP _refinr_remove_strings(SEXP inputSEXP, SEXP removesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type input(inputSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type removes(removesSEXP);
    rcpp_result_gen = Rcpp::wrap(remove_strings(input, removes));
    return rcpp_result_gen;
END_RCPP
}
// cpp_unique
CharacterVector cpp_unique(const CharacterVector& vect);
RcppExport SEXP _refinr_cpp_unique(SEXP vectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CharacterVector& >::type vect(vectSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_unique(vect));
    return rcpp_result_gen;
END_RCPP
}
// cpp_trimws_left
CharacterVector cpp_trimws_left(const CharacterVector& vect);
RcppExport SEXP _refinr_cpp_trimws_left(SEXP vectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CharacterVector& >::type vect(vectSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_trimws_left(vect));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_refinr_merge_KC_clusters", (DL_FUNC) &_refinr_merge_KC_clusters, 4},
    {"_refinr_ngram_merge_no_approx", (DL_FUNC) &_refinr_ngram_merge_no_approx, 3},
    {"_refinr_ngram_merge_approx", (DL_FUNC) &_refinr_ngram_merge_approx, 12},
    {"_refinr_cpp_get_char_ngrams", (DL_FUNC) &_refinr_cpp_get_char_ngrams, 2},
    {"_refinr_cpp_tolower", (DL_FUNC) &_refinr_cpp_tolower, 1},
    {"_refinr_cpp_paste_list", (DL_FUNC) &_refinr_cpp_paste_list, 2},
    {"_refinr_cpp_list_unique", (DL_FUNC) &_refinr_cpp_list_unique, 2},
    {"_refinr_remove_strings", (DL_FUNC) &_refinr_remove_strings, 2},
    {"_refinr_cpp_unique", (DL_FUNC) &_refinr_cpp_unique, 1},
    {"_refinr_cpp_trimws_left", (DL_FUNC) &_refinr_cpp_trimws_left, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_refinr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
