// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// st_mats_perimeter
arma::vec st_mats_perimeter(std::vector<arma::mat>& Xvec);
RcppExport SEXP _cygnus_st_mats_perimeter(SEXP XvecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<arma::mat>& >::type Xvec(XvecSEXP);
    rcpp_result_gen = Rcpp::wrap(st_mats_perimeter(Xvec));
    return rcpp_result_gen;
END_RCPP
}
// get_e_minus_epaths_saddles
arma::uvec get_e_minus_epaths_saddles(std::vector<arma::uvec>& epaths, arma::uvec saddles, int N);
RcppExport SEXP _cygnus_get_e_minus_epaths_saddles(SEXP epathsSEXP, SEXP saddlesSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<arma::uvec>& >::type epaths(epathsSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type saddles(saddlesSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(get_e_minus_epaths_saddles(epaths, saddles, N));
    return rcpp_result_gen;
END_RCPP
}
// is_in_list
bool is_in_list(unsigned target, std::list<unsigned> mylist);
RcppExport SEXP _cygnus_is_in_list(SEXP targetSEXP, SEXP mylistSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned >::type target(targetSEXP);
    Rcpp::traits::input_parameter< std::list<unsigned> >::type mylist(mylistSEXP);
    rcpp_result_gen = Rcpp::wrap(is_in_list(target, mylist));
    return rcpp_result_gen;
END_RCPP
}
// mergeListsToArmaUVec
arma::uvec mergeListsToArmaUVec(const std::list<unsigned>& list1, const std::list<unsigned>& list2);
RcppExport SEXP _cygnus_mergeListsToArmaUVec(SEXP list1SEXP, SEXP list2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::list<unsigned>& >::type list1(list1SEXP);
    Rcpp::traits::input_parameter< const std::list<unsigned>& >::type list2(list2SEXP);
    rcpp_result_gen = Rcpp::wrap(mergeListsToArmaUVec(list1, list2));
    return rcpp_result_gen;
END_RCPP
}
// findDuplicates
arma::uvec findDuplicates(const arma::uvec& input);
RcppExport SEXP _cygnus_findDuplicates(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(findDuplicates(input));
    return rcpp_result_gen;
END_RCPP
}
// update_V_cpp
void update_V_cpp(arma::mat& V_pcs, arma::vec& V_npts, arma::vec& V_perimeter, arma::vec& V_area, unsigned e_merge_from, unsigned e_merge_to, double e_merge_edge_length, double e_merge_area, double e_merge_npts, const arma::rowvec& e_merge_pcs, int agg_mode);
RcppExport SEXP _cygnus_update_V_cpp(SEXP V_pcsSEXP, SEXP V_nptsSEXP, SEXP V_perimeterSEXP, SEXP V_areaSEXP, SEXP e_merge_fromSEXP, SEXP e_merge_toSEXP, SEXP e_merge_edge_lengthSEXP, SEXP e_merge_areaSEXP, SEXP e_merge_nptsSEXP, SEXP e_merge_pcsSEXP, SEXP agg_modeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type V_pcs(V_pcsSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type V_npts(V_nptsSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type V_perimeter(V_perimeterSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type V_area(V_areaSEXP);
    Rcpp::traits::input_parameter< unsigned >::type e_merge_from(e_merge_fromSEXP);
    Rcpp::traits::input_parameter< unsigned >::type e_merge_to(e_merge_toSEXP);
    Rcpp::traits::input_parameter< double >::type e_merge_edge_length(e_merge_edge_lengthSEXP);
    Rcpp::traits::input_parameter< double >::type e_merge_area(e_merge_areaSEXP);
    Rcpp::traits::input_parameter< double >::type e_merge_npts(e_merge_nptsSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type e_merge_pcs(e_merge_pcsSEXP);
    Rcpp::traits::input_parameter< int >::type agg_mode(agg_modeSEXP);
    update_V_cpp(V_pcs, V_npts, V_perimeter, V_area, e_merge_from, e_merge_to, e_merge_edge_length, e_merge_area, e_merge_npts, e_merge_pcs, agg_mode);
    return R_NilValue;
END_RCPP
}
// update_E_cpp
void update_E_cpp(arma::mat& V_pcs, arma::vec& V_perimeter, arma::vec& V_area, arma::vec& V_npts, arma::uvec& E_from, arma::uvec& E_to, arma::vec& E_npts, arma::vec& E_area, arma::vec& E_edge_length, arma::mat& E_pcs_merge, arma::vec& E_w, arma::vec& E_perimeter_merge, arma::vec& E_score_size, arma::vec& E_dscore, arma::uvec& e_update, std::vector<std::list<unsigned> >& V_to_E_from, std::vector<std::list<unsigned> >& V_to_E_to, double d_mu, double d_sig, int agg_mode, double min_npts, double max_npts);
RcppExport SEXP _cygnus_update_E_cpp(SEXP V_pcsSEXP, SEXP V_perimeterSEXP, SEXP V_areaSEXP, SEXP V_nptsSEXP, SEXP E_fromSEXP, SEXP E_toSEXP, SEXP E_nptsSEXP, SEXP E_areaSEXP, SEXP E_edge_lengthSEXP, SEXP E_pcs_mergeSEXP, SEXP E_wSEXP, SEXP E_perimeter_mergeSEXP, SEXP E_score_sizeSEXP, SEXP E_dscoreSEXP, SEXP e_updateSEXP, SEXP V_to_E_fromSEXP, SEXP V_to_E_toSEXP, SEXP d_muSEXP, SEXP d_sigSEXP, SEXP agg_modeSEXP, SEXP min_nptsSEXP, SEXP max_nptsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type V_pcs(V_pcsSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type V_perimeter(V_perimeterSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type V_area(V_areaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type V_npts(V_nptsSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type E_from(E_fromSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type E_to(E_toSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type E_npts(E_nptsSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type E_area(E_areaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type E_edge_length(E_edge_lengthSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type E_pcs_merge(E_pcs_mergeSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type E_w(E_wSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type E_perimeter_merge(E_perimeter_mergeSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type E_score_size(E_score_sizeSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type E_dscore(E_dscoreSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type e_update(e_updateSEXP);
    Rcpp::traits::input_parameter< std::vector<std::list<unsigned> >& >::type V_to_E_from(V_to_E_fromSEXP);
    Rcpp::traits::input_parameter< std::vector<std::list<unsigned> >& >::type V_to_E_to(V_to_E_toSEXP);
    Rcpp::traits::input_parameter< double >::type d_mu(d_muSEXP);
    Rcpp::traits::input_parameter< double >::type d_sig(d_sigSEXP);
    Rcpp::traits::input_parameter< int >::type agg_mode(agg_modeSEXP);
    Rcpp::traits::input_parameter< double >::type min_npts(min_nptsSEXP);
    Rcpp::traits::input_parameter< double >::type max_npts(max_nptsSEXP);
    update_E_cpp(V_pcs, V_perimeter, V_area, V_npts, E_from, E_to, E_npts, E_area, E_edge_length, E_pcs_merge, E_w, E_perimeter_merge, E_score_size, E_dscore, e_update, V_to_E_from, V_to_E_to, d_mu, d_sig, agg_mode, min_npts, max_npts);
    return R_NilValue;
END_RCPP
}
// merge_aggs_cpp
std::vector<std::list<unsigned> > merge_aggs_cpp(arma::mat& V_pcs, arma::vec& V_area, arma::vec& V_perimeter, arma::vec& V_npts, arma::uvec& E_from, arma::uvec& E_to, arma::vec& E_npts, arma::vec& E_area, arma::vec& E_edge_length, arma::mat& E_pcs_merge, arma::vec& E_w, arma::vec& E_perimeter_merge, arma::vec& E_score_size, arma::vec& E_dscore, double d_mu, double d_sig, unsigned iter_max, int agg_mode, double dscore_thresh, double min_npts, double max_npts);
RcppExport SEXP _cygnus_merge_aggs_cpp(SEXP V_pcsSEXP, SEXP V_areaSEXP, SEXP V_perimeterSEXP, SEXP V_nptsSEXP, SEXP E_fromSEXP, SEXP E_toSEXP, SEXP E_nptsSEXP, SEXP E_areaSEXP, SEXP E_edge_lengthSEXP, SEXP E_pcs_mergeSEXP, SEXP E_wSEXP, SEXP E_perimeter_mergeSEXP, SEXP E_score_sizeSEXP, SEXP E_dscoreSEXP, SEXP d_muSEXP, SEXP d_sigSEXP, SEXP iter_maxSEXP, SEXP agg_modeSEXP, SEXP dscore_threshSEXP, SEXP min_nptsSEXP, SEXP max_nptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type V_pcs(V_pcsSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type V_area(V_areaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type V_perimeter(V_perimeterSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type V_npts(V_nptsSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type E_from(E_fromSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type E_to(E_toSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type E_npts(E_nptsSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type E_area(E_areaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type E_edge_length(E_edge_lengthSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type E_pcs_merge(E_pcs_mergeSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type E_w(E_wSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type E_perimeter_merge(E_perimeter_mergeSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type E_score_size(E_score_sizeSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type E_dscore(E_dscoreSEXP);
    Rcpp::traits::input_parameter< double >::type d_mu(d_muSEXP);
    Rcpp::traits::input_parameter< double >::type d_sig(d_sigSEXP);
    Rcpp::traits::input_parameter< unsigned >::type iter_max(iter_maxSEXP);
    Rcpp::traits::input_parameter< int >::type agg_mode(agg_modeSEXP);
    Rcpp::traits::input_parameter< double >::type dscore_thresh(dscore_threshSEXP);
    Rcpp::traits::input_parameter< double >::type min_npts(min_nptsSEXP);
    Rcpp::traits::input_parameter< double >::type max_npts(max_nptsSEXP);
    rcpp_result_gen = Rcpp::wrap(merge_aggs_cpp(V_pcs, V_area, V_perimeter, V_npts, E_from, E_to, E_npts, E_area, E_edge_length, E_pcs_merge, E_w, E_perimeter_merge, E_score_size, E_dscore, d_mu, d_sig, iter_max, agg_mode, dscore_thresh, min_npts, max_npts));
    return rcpp_result_gen;
END_RCPP
}
// foo_triplets_edges
arma::umat foo_triplets_edges(arma::umat& triplets, arma::umat& edges);
RcppExport SEXP _cygnus_foo_triplets_edges(SEXP tripletsSEXP, SEXP edgesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::umat& >::type triplets(tripletsSEXP);
    Rcpp::traits::input_parameter< arma::umat& >::type edges(edgesSEXP);
    rcpp_result_gen = Rcpp::wrap(foo_triplets_edges(triplets, edges));
    return rcpp_result_gen;
END_RCPP
}
// do_dmt_forest_cpp
Rcpp::List do_dmt_forest_cpp(const arma::vec& f, const arma::uvec& edges_from, const arma::uvec& edges_to, const arma::vec& edges_f);
RcppExport SEXP _cygnus_do_dmt_forest_cpp(SEXP fSEXP, SEXP edges_fromSEXP, SEXP edges_toSEXP, SEXP edges_fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type f(fSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type edges_from(edges_fromSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type edges_to(edges_toSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type edges_f(edges_fSEXP);
    rcpp_result_gen = Rcpp::wrap(do_dmt_forest_cpp(f, edges_from, edges_to, edges_f));
    return rcpp_result_gen;
END_RCPP
}
// trace_back_cpp
std::list<unsigned> trace_back_cpp(unsigned v0, unsigned vcrit, const arma::uvec& parent_edge, const arma::uvec& parent);
RcppExport SEXP _cygnus_trace_back_cpp(SEXP v0SEXP, SEXP vcritSEXP, SEXP parent_edgeSEXP, SEXP parentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned >::type v0(v0SEXP);
    Rcpp::traits::input_parameter< unsigned >::type vcrit(vcritSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type parent_edge(parent_edgeSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type parent(parentSEXP);
    rcpp_result_gen = Rcpp::wrap(trace_back_cpp(v0, vcrit, parent_edge, parent));
    return rcpp_result_gen;
END_RCPP
}
// trace_epaths_cpp
std::vector<std::list<unsigned> > trace_epaths_cpp(const arma::uvec& saddles, const arma::uvec& vcrits, const arma::uvec& edges_from, const arma::uvec& edges_to, const arma::uvec& parent_edge, const arma::uvec& parent);
RcppExport SEXP _cygnus_trace_epaths_cpp(SEXP saddlesSEXP, SEXP vcritsSEXP, SEXP edges_fromSEXP, SEXP edges_toSEXP, SEXP parent_edgeSEXP, SEXP parentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type saddles(saddlesSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type vcrits(vcritsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type edges_from(edges_fromSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type edges_to(edges_toSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type parent_edge(parent_edgeSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type parent(parentSEXP);
    rcpp_result_gen = Rcpp::wrap(trace_epaths_cpp(saddles, vcrits, edges_from, edges_to, parent_edge, parent));
    return rcpp_result_gen;
END_RCPP
}
// get_e_sep
arma::uvec get_e_sep(std::vector<arma::uvec> epaths, arma::uvec saddles, int nedges);
RcppExport SEXP _cygnus_get_e_sep(SEXP epathsSEXP, SEXP saddlesSEXP, SEXP nedgesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<arma::uvec> >::type epaths(epathsSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type saddles(saddlesSEXP);
    Rcpp::traits::input_parameter< int >::type nedges(nedgesSEXP);
    rcpp_result_gen = Rcpp::wrap(get_e_sep(epaths, saddles, nedges));
    return rcpp_result_gen;
END_RCPP
}
// prune_e_sep
arma::uvec prune_e_sep(arma::mat& edges, int ntris, std::vector<bool> is_tri_external, arma::uvec e_sep);
RcppExport SEXP _cygnus_prune_e_sep(SEXP edgesSEXP, SEXP ntrisSEXP, SEXP is_tri_externalSEXP, SEXP e_sepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type edges(edgesSEXP);
    Rcpp::traits::input_parameter< int >::type ntris(ntrisSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type is_tri_external(is_tri_externalSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type e_sep(e_sepSEXP);
    rcpp_result_gen = Rcpp::wrap(prune_e_sep(edges, ntris, is_tri_external, e_sep));
    return rcpp_result_gen;
END_RCPP
}
// nn_touches_2_vertices
std::vector<std::list<unsigned> > nn_touches_2_vertices(std::vector<std::list<unsigned> > nn_touches, arma::imat triplets);
RcppExport SEXP _cygnus_nn_touches_2_vertices(SEXP nn_touchesSEXP, SEXP tripletsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::list<unsigned> > >::type nn_touches(nn_touchesSEXP);
    Rcpp::traits::input_parameter< arma::imat >::type triplets(tripletsSEXP);
    rcpp_result_gen = Rcpp::wrap(nn_touches_2_vertices(nn_touches, triplets));
    return rcpp_result_gen;
END_RCPP
}
// smooth_field_cpp
arma::cube smooth_field_cpp(arma::uvec& pvec, arma::uvec& adj_i, arma::uvec& adj_p, arma::cube& field, arma::mat& coords, unsigned distance, unsigned similarity);
RcppExport SEXP _cygnus_smooth_field_cpp(SEXP pvecSEXP, SEXP adj_iSEXP, SEXP adj_pSEXP, SEXP fieldSEXP, SEXP coordsSEXP, SEXP distanceSEXP, SEXP similaritySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec& >::type pvec(pvecSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type adj_i(adj_iSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type adj_p(adj_pSEXP);
    Rcpp::traits::input_parameter< arma::cube& >::type field(fieldSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type coords(coordsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< unsigned >::type similarity(similaritySEXP);
    rcpp_result_gen = Rcpp::wrap(smooth_field_cpp(pvec, adj_i, adj_p, field, coords, distance, similarity));
    return rcpp_result_gen;
END_RCPP
}
// compress_field_cpp
arma::mat compress_field_cpp(arma::cube& field);
RcppExport SEXP _cygnus_compress_field_cpp(SEXP fieldSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube& >::type field(fieldSEXP);
    rcpp_result_gen = Rcpp::wrap(compress_field_cpp(field));
    return rcpp_result_gen;
END_RCPP
}
// estimate_field_cpp
arma::cube estimate_field_cpp(arma::mat& coords, arma::mat& embeddings, arma::uvec& adj_i, arma::uvec& adj_p);
RcppExport SEXP _cygnus_estimate_field_cpp(SEXP coordsSEXP, SEXP embeddingsSEXP, SEXP adj_iSEXP, SEXP adj_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type coords(coordsSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type embeddings(embeddingsSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type adj_i(adj_iSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type adj_p(adj_pSEXP);
    rcpp_result_gen = Rcpp::wrap(estimate_field_cpp(coords, embeddings, adj_i, adj_p));
    return rcpp_result_gen;
END_RCPP
}
// assign_unique_rowid_cpp
arma::uvec assign_unique_rowid_cpp(arma::vec X, arma::vec Y);
RcppExport SEXP _cygnus_assign_unique_rowid_cpp(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(assign_unique_rowid_cpp(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// init_edges_cpp
arma::mat init_edges_cpp(arma::mat& triplets, arma::mat& pts, arma::mat& tris);
RcppExport SEXP _cygnus_init_edges_cpp(SEXP tripletsSEXP, SEXP ptsSEXP, SEXP trisSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type triplets(tripletsSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type pts(ptsSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type tris(trisSEXP);
    rcpp_result_gen = Rcpp::wrap(init_edges_cpp(triplets, pts, tris));
    return rcpp_result_gen;
END_RCPP
}
// init_tris_cpp
arma::mat init_tris_cpp(arma::umat& triplets, arma::mat& pts);
RcppExport SEXP _cygnus_init_tris_cpp(SEXP tripletsSEXP, SEXP ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::umat& >::type triplets(tripletsSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type pts(ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(init_tris_cpp(triplets, pts));
    return rcpp_result_gen;
END_RCPP
}
// mapToConsecutivePositions
arma::vec mapToConsecutivePositions(const arma::vec& numbers);
RcppExport SEXP _cygnus_mapToConsecutivePositions(SEXP numbersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type numbers(numbersSEXP);
    rcpp_result_gen = Rcpp::wrap(mapToConsecutivePositions(numbers));
    return rcpp_result_gen;
END_RCPP
}
// splitSequence
std::vector<arma::uvec> splitSequence(const arma::vec& y);
RcppExport SEXP _cygnus_splitSequence(SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(splitSequence(y));
    return rcpp_result_gen;
END_RCPP
}
// findLargestComponentEulerCycle
arma::uvec findLargestComponentEulerCycle(arma::mat& edges);
RcppExport SEXP _cygnus_findLargestComponentEulerCycle(SEXP edgesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type edges(edgesSEXP);
    rcpp_result_gen = Rcpp::wrap(findLargestComponentEulerCycle(edges));
    return rcpp_result_gen;
END_RCPP
}
// get_agg_to_boundary_edge
std::vector<arma::uvec > get_agg_to_boundary_edge(arma::mat& E, unsigned n_agg);
RcppExport SEXP _cygnus_get_agg_to_boundary_edge(SEXP ESEXP, SEXP n_aggSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type E(ESEXP);
    Rcpp::traits::input_parameter< unsigned >::type n_agg(n_aggSEXP);
    rcpp_result_gen = Rcpp::wrap(get_agg_to_boundary_edge(E, n_agg));
    return rcpp_result_gen;
END_RCPP
}
// get_agg_to_edge
std::vector<arma::uvec> get_agg_to_edge(arma::mat& edges, unsigned naggs, bool always_include_boundary);
RcppExport SEXP _cygnus_get_agg_to_edge(SEXP edgesSEXP, SEXP naggsSEXP, SEXP always_include_boundarySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type edges(edgesSEXP);
    Rcpp::traits::input_parameter< unsigned >::type naggs(naggsSEXP);
    Rcpp::traits::input_parameter< bool >::type always_include_boundary(always_include_boundarySEXP);
    rcpp_result_gen = Rcpp::wrap(get_agg_to_edge(edges, naggs, always_include_boundary));
    return rcpp_result_gen;
END_RCPP
}
// get_boundary_graph_cpp
arma::mat get_boundary_graph_cpp(arma::uvec e_dual, arma::uvec i_pts, arma::uvec e_prim, arma::mat& E, double ntris);
RcppExport SEXP _cygnus_get_boundary_graph_cpp(SEXP e_dualSEXP, SEXP i_ptsSEXP, SEXP e_primSEXP, SEXP ESEXP, SEXP ntrisSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec >::type e_dual(e_dualSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type i_pts(i_ptsSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type e_prim(e_primSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type E(ESEXP);
    Rcpp::traits::input_parameter< double >::type ntris(ntrisSEXP);
    rcpp_result_gen = Rcpp::wrap(get_boundary_graph_cpp(e_dual, i_pts, e_prim, E, ntris));
    return rcpp_result_gen;
END_RCPP
}
// trace_polygons_cpp
Rcpp::List trace_polygons_cpp(arma::mat& edges, unsigned naggs, unsigned ntris, arma::vec& pts_dmt_component);
RcppExport SEXP _cygnus_trace_polygons_cpp(SEXP edgesSEXP, SEXP naggsSEXP, SEXP ntrisSEXP, SEXP pts_dmt_componentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type edges(edgesSEXP);
    Rcpp::traits::input_parameter< unsigned >::type naggs(naggsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ntris(ntrisSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type pts_dmt_component(pts_dmt_componentSEXP);
    rcpp_result_gen = Rcpp::wrap(trace_polygons_cpp(edges, naggs, ntris, pts_dmt_component));
    return rcpp_result_gen;
END_RCPP
}
// trace_polygons_pts_cpp
Rcpp::List trace_polygons_pts_cpp(arma::mat& edges, unsigned naggs);
RcppExport SEXP _cygnus_trace_polygons_pts_cpp(SEXP edgesSEXP, SEXP naggsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type edges(edgesSEXP);
    Rcpp::traits::input_parameter< unsigned >::type naggs(naggsSEXP);
    rcpp_result_gen = Rcpp::wrap(trace_polygons_pts_cpp(edges, naggs));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_cygnus_st_mats_perimeter", (DL_FUNC) &_cygnus_st_mats_perimeter, 1},
    {"_cygnus_get_e_minus_epaths_saddles", (DL_FUNC) &_cygnus_get_e_minus_epaths_saddles, 3},
    {"_cygnus_is_in_list", (DL_FUNC) &_cygnus_is_in_list, 2},
    {"_cygnus_mergeListsToArmaUVec", (DL_FUNC) &_cygnus_mergeListsToArmaUVec, 2},
    {"_cygnus_findDuplicates", (DL_FUNC) &_cygnus_findDuplicates, 1},
    {"_cygnus_update_V_cpp", (DL_FUNC) &_cygnus_update_V_cpp, 11},
    {"_cygnus_update_E_cpp", (DL_FUNC) &_cygnus_update_E_cpp, 22},
    {"_cygnus_merge_aggs_cpp", (DL_FUNC) &_cygnus_merge_aggs_cpp, 21},
    {"_cygnus_foo_triplets_edges", (DL_FUNC) &_cygnus_foo_triplets_edges, 2},
    {"_cygnus_do_dmt_forest_cpp", (DL_FUNC) &_cygnus_do_dmt_forest_cpp, 4},
    {"_cygnus_trace_back_cpp", (DL_FUNC) &_cygnus_trace_back_cpp, 4},
    {"_cygnus_trace_epaths_cpp", (DL_FUNC) &_cygnus_trace_epaths_cpp, 6},
    {"_cygnus_get_e_sep", (DL_FUNC) &_cygnus_get_e_sep, 3},
    {"_cygnus_prune_e_sep", (DL_FUNC) &_cygnus_prune_e_sep, 4},
    {"_cygnus_nn_touches_2_vertices", (DL_FUNC) &_cygnus_nn_touches_2_vertices, 2},
    {"_cygnus_smooth_field_cpp", (DL_FUNC) &_cygnus_smooth_field_cpp, 7},
    {"_cygnus_compress_field_cpp", (DL_FUNC) &_cygnus_compress_field_cpp, 1},
    {"_cygnus_estimate_field_cpp", (DL_FUNC) &_cygnus_estimate_field_cpp, 4},
    {"_cygnus_assign_unique_rowid_cpp", (DL_FUNC) &_cygnus_assign_unique_rowid_cpp, 2},
    {"_cygnus_init_edges_cpp", (DL_FUNC) &_cygnus_init_edges_cpp, 3},
    {"_cygnus_init_tris_cpp", (DL_FUNC) &_cygnus_init_tris_cpp, 2},
    {"_cygnus_mapToConsecutivePositions", (DL_FUNC) &_cygnus_mapToConsecutivePositions, 1},
    {"_cygnus_splitSequence", (DL_FUNC) &_cygnus_splitSequence, 1},
    {"_cygnus_findLargestComponentEulerCycle", (DL_FUNC) &_cygnus_findLargestComponentEulerCycle, 1},
    {"_cygnus_get_agg_to_boundary_edge", (DL_FUNC) &_cygnus_get_agg_to_boundary_edge, 2},
    {"_cygnus_get_agg_to_edge", (DL_FUNC) &_cygnus_get_agg_to_edge, 3},
    {"_cygnus_get_boundary_graph_cpp", (DL_FUNC) &_cygnus_get_boundary_graph_cpp, 5},
    {"_cygnus_trace_polygons_cpp", (DL_FUNC) &_cygnus_trace_polygons_cpp, 4},
    {"_cygnus_trace_polygons_pts_cpp", (DL_FUNC) &_cygnus_trace_polygons_pts_cpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_cygnus(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
