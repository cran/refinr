// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// merge_KC_clusters_no_dict
CharacterVector merge_KC_clusters_no_dict(CharacterVector clusters, CharacterVector keys_vect, CharacterVector vect, LogicalVector keys_in_clusters);
RcppExport SEXP _refinr_merge_KC_clusters_no_dict(SEXP clustersSEXP, SEXP keys_vectSEXP, SEXP vectSEXP, SEXP keys_in_clustersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type keys_vect(keys_vectSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type vect(vectSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type keys_in_clusters(keys_in_clustersSEXP);
    rcpp_result_gen = Rcpp::wrap(merge_KC_clusters_no_dict(clusters, keys_vect, vect, keys_in_clusters));
    return rcpp_result_gen;
END_RCPP
}
// merge_KC_clusters_dict
CharacterVector merge_KC_clusters_dict(CharacterVector clusters, CharacterVector keys_vect, CharacterVector vect, CharacterVector keys_dict, CharacterVector dict, LogicalVector keys_in_clusters);
RcppExport SEXP _refinr_merge_KC_clusters_dict(SEXP clustersSEXP, SEXP keys_vectSEXP, SEXP vectSEXP, SEXP keys_dictSEXP, SEXP dictSEXP, SEXP keys_in_clustersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type keys_vect(keys_vectSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type vect(vectSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type keys_dict(keys_dictSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type keys_in_clusters(keys_in_clustersSEXP);
    rcpp_result_gen = Rcpp::wrap(merge_KC_clusters_dict(clusters, keys_vect, vect, keys_dict, dict, keys_in_clusters));
    return rcpp_result_gen;
END_RCPP
}
// most_freq
String most_freq(String clust, CharacterVector keys_sub, CharacterVector vect_sub);
RcppExport SEXP _refinr_most_freq(SEXP clustSEXP, SEXP keys_subSEXP, SEXP vect_subSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type clust(clustSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type keys_sub(keys_subSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type vect_sub(vect_subSEXP);
    rcpp_result_gen = Rcpp::wrap(most_freq(clust, keys_sub, vect_sub));
    return rcpp_result_gen;
END_RCPP
}
// merge_ngram_clusters
CharacterVector merge_ngram_clusters(List clusters, CharacterVector n_gram_keys, CharacterVector univect, CharacterVector vect);
RcppExport SEXP _refinr_merge_ngram_clusters(SEXP clustersSEXP, SEXP n_gram_keysSEXP, SEXP univectSEXP, SEXP vectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type n_gram_keys(n_gram_keysSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type univect(univectSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type vect(vectSEXP);
    rcpp_result_gen = Rcpp::wrap(merge_ngram_clusters(clusters, n_gram_keys, univect, vect));
    return rcpp_result_gen;
END_RCPP
}
// get_ngram_initial_clusters
List get_ngram_initial_clusters(CharacterVector ngram_keys, CharacterVector unigram_keys, CharacterVector unigram_dups);
RcppExport SEXP _refinr_get_ngram_initial_clusters(SEXP ngram_keysSEXP, SEXP unigram_keysSEXP, SEXP unigram_dupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type ngram_keys(ngram_keysSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type unigram_keys(unigram_keysSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type unigram_dups(unigram_dupsSEXP);
    rcpp_result_gen = Rcpp::wrap(get_ngram_initial_clusters(ngram_keys, unigram_keys, unigram_dups));
    return rcpp_result_gen;
END_RCPP
}
// filter_initial_clusters
List filter_initial_clusters(List distmatrices, double edit_threshold, List clusters);
RcppExport SEXP _refinr_filter_initial_clusters(SEXP distmatricesSEXP, SEXP edit_thresholdSEXP, SEXP clustersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type distmatrices(distmatricesSEXP);
    Rcpp::traits::input_parameter< double >::type edit_threshold(edit_thresholdSEXP);
    Rcpp::traits::input_parameter< List >::type clusters(clustersSEXP);
    rcpp_result_gen = Rcpp::wrap(filter_initial_clusters(distmatrices, edit_threshold, clusters));
    return rcpp_result_gen;
END_RCPP
}
// char_ngram
List char_ngram(List vects, int numgram);
RcppExport SEXP _refinr_char_ngram(SEXP vectsSEXP, SEXP numgramSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type vects(vectsSEXP);
    Rcpp::traits::input_parameter< int >::type numgram(numgramSEXP);
    rcpp_result_gen = Rcpp::wrap(char_ngram(vects, numgram));
    return rcpp_result_gen;
END_RCPP
}
// cpp_get_char_ngrams
CharacterVector cpp_get_char_ngrams(List vects, int numgram);
RcppExport SEXP _refinr_cpp_get_char_ngrams(SEXP vectsSEXP, SEXP numgramSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type vects(vectsSEXP);
    Rcpp::traits::input_parameter< int >::type numgram(numgramSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_get_char_ngrams(vects, numgram));
    return rcpp_result_gen;
END_RCPP
}
// cpp_paste_collapse_list
CharacterVector cpp_paste_collapse_list(List input);
RcppExport SEXP _refinr_cpp_paste_collapse_list(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_paste_collapse_list(input));
    return rcpp_result_gen;
END_RCPP
}
// complete_intersect
bool complete_intersect(CharacterVector a, CharacterVector b);
RcppExport SEXP _refinr_complete_intersect(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(complete_intersect(a, b));
    return rcpp_result_gen;
END_RCPP
}
// cpp_get_key_dups
CharacterVector cpp_get_key_dups(CharacterVector keys);
RcppExport SEXP _refinr_cpp_get_key_dups(SEXP keysSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type keys(keysSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_get_key_dups(keys));
    return rcpp_result_gen;
END_RCPP
}
// cpp_in
LogicalVector cpp_in(CharacterVector x, CharacterVector y);
RcppExport SEXP _refinr_cpp_in(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_in(x, y));
    return rcpp_result_gen;
END_RCPP
}
// cpp_list_unique
List cpp_list_unique(List input, bool sort_vals);
RcppExport SEXP _refinr_cpp_list_unique(SEXP inputSEXP, SEXP sort_valsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type input(inputSEXP);
    Rcpp::traits::input_parameter< bool >::type sort_vals(sort_valsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_list_unique(input, sort_vals));
    return rcpp_result_gen;
END_RCPP
}
// remove_strings
List remove_strings(List input, CharacterVector removes);
RcppExport SEXP _refinr_remove_strings(SEXP inputSEXP, SEXP removesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type input(inputSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type removes(removesSEXP);
    rcpp_result_gen = Rcpp::wrap(remove_strings(input, removes));
    return rcpp_result_gen;
END_RCPP
}
// equality
LogicalVector equality(CharacterVector lookupvect, String charstring);
RcppExport SEXP _refinr_equality(SEXP lookupvectSEXP, SEXP charstringSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type lookupvect(lookupvectSEXP);
    Rcpp::traits::input_parameter< String >::type charstring(charstringSEXP);
    rcpp_result_gen = Rcpp::wrap(equality(lookupvect, charstring));
    return rcpp_result_gen;
END_RCPP
}
// cpp_unique
CharacterVector cpp_unique(CharacterVector vect);
RcppExport SEXP _refinr_cpp_unique(SEXP vectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type vect(vectSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_unique(vect));
    return rcpp_result_gen;
END_RCPP
}
// cpp_trimws_left
CharacterVector cpp_trimws_left(CharacterVector vect);
RcppExport SEXP _refinr_cpp_trimws_left(SEXP vectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type vect(vectSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_trimws_left(vect));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_refinr_merge_KC_clusters_no_dict", (DL_FUNC) &_refinr_merge_KC_clusters_no_dict, 4},
    {"_refinr_merge_KC_clusters_dict", (DL_FUNC) &_refinr_merge_KC_clusters_dict, 6},
    {"_refinr_most_freq", (DL_FUNC) &_refinr_most_freq, 3},
    {"_refinr_merge_ngram_clusters", (DL_FUNC) &_refinr_merge_ngram_clusters, 4},
    {"_refinr_get_ngram_initial_clusters", (DL_FUNC) &_refinr_get_ngram_initial_clusters, 3},
    {"_refinr_filter_initial_clusters", (DL_FUNC) &_refinr_filter_initial_clusters, 3},
    {"_refinr_char_ngram", (DL_FUNC) &_refinr_char_ngram, 2},
    {"_refinr_cpp_get_char_ngrams", (DL_FUNC) &_refinr_cpp_get_char_ngrams, 2},
    {"_refinr_cpp_paste_collapse_list", (DL_FUNC) &_refinr_cpp_paste_collapse_list, 1},
    {"_refinr_complete_intersect", (DL_FUNC) &_refinr_complete_intersect, 2},
    {"_refinr_cpp_get_key_dups", (DL_FUNC) &_refinr_cpp_get_key_dups, 1},
    {"_refinr_cpp_in", (DL_FUNC) &_refinr_cpp_in, 2},
    {"_refinr_cpp_list_unique", (DL_FUNC) &_refinr_cpp_list_unique, 2},
    {"_refinr_remove_strings", (DL_FUNC) &_refinr_remove_strings, 2},
    {"_refinr_equality", (DL_FUNC) &_refinr_equality, 2},
    {"_refinr_cpp_unique", (DL_FUNC) &_refinr_cpp_unique, 1},
    {"_refinr_cpp_trimws_left", (DL_FUNC) &_refinr_cpp_trimws_left, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_refinr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}