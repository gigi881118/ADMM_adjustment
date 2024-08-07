// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// multipleinversion
arma::cube multipleinversion(arma::mat A, double rho, arma::mat L, arma::mat R, arma::vec lambda2);
RcppExport SEXP _ADMMadj5_multipleinversion(SEXP ASEXP, SEXP rhoSEXP, SEXP LSEXP, SEXP RSEXP, SEXP lambda2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type L(LSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type R(RSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lambda2(lambda2SEXP);
    rcpp_result_gen = Rcpp::wrap(multipleinversion(A, rho, L, R, lambda2));
    return rcpp_result_gen;
END_RCPP
}
// admm_tv
Rcpp::List admm_tv(const arma::colvec& b, arma::colvec& xinit, const double lambda, const double reltol, const double abstol, const int maxiter, const double rho, const double alpha);
RcppExport SEXP _ADMMadj5_admm_tv(SEXP bSEXP, SEXP xinitSEXP, SEXP lambdaSEXP, SEXP reltolSEXP, SEXP abstolSEXP, SEXP maxiterSEXP, SEXP rhoSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::colvec& >::type xinit(xinitSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< const double >::type abstol(abstolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< const double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(admm_tv(b, xinit, lambda, reltol, abstol, maxiter, rho, alpha));
    return rcpp_result_gen;
END_RCPP
}
// admm_bp
Rcpp::List admm_bp(const arma::mat& A, const arma::colvec& b, arma::colvec& xinit, const double reltol, const double abstol, const int maxiter, const double rho, const double alpha);
RcppExport SEXP _ADMMadj5_admm_bp(SEXP ASEXP, SEXP bSEXP, SEXP xinitSEXP, SEXP reltolSEXP, SEXP abstolSEXP, SEXP maxiterSEXP, SEXP rhoSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::colvec& >::type xinit(xinitSEXP);
    Rcpp::traits::input_parameter< const double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< const double >::type abstol(abstolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< const double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(admm_bp(A, b, xinit, reltol, abstol, maxiter, rho, alpha));
    return rcpp_result_gen;
END_RCPP
}
// admm_enet
Rcpp::List admm_enet(const arma::mat& A, const arma::colvec& b, const double lambda, const double alpha, const double reltol, const double abstol, const int maxiter, const double rho);
RcppExport SEXP _ADMMadj5_admm_enet(SEXP ASEXP, SEXP bSEXP, SEXP lambdaSEXP, SEXP alphaSEXP, SEXP reltolSEXP, SEXP abstolSEXP, SEXP maxiterSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< const double >::type abstol(abstolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< const double >::type rho(rhoSEXP);
    rcpp_result_gen = Rcpp::wrap(admm_enet(A, b, lambda, alpha, reltol, abstol, maxiter, rho));
    return rcpp_result_gen;
END_RCPP
}
// admm_genlasso
Rcpp::List admm_genlasso(const arma::mat& A, const arma::colvec& b, const arma::mat& D, const double lambda, const double reltol, const double abstol, const int maxiter, const double rho);
RcppExport SEXP _ADMMadj5_admm_genlasso(SEXP ASEXP, SEXP bSEXP, SEXP DSEXP, SEXP lambdaSEXP, SEXP reltolSEXP, SEXP abstolSEXP, SEXP maxiterSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< const double >::type abstol(abstolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< const double >::type rho(rhoSEXP);
    rcpp_result_gen = Rcpp::wrap(admm_genlasso(A, b, D, lambda, reltol, abstol, maxiter, rho));
    return rcpp_result_gen;
END_RCPP
}
// admm_lad
Rcpp::List admm_lad(const arma::mat& A, const arma::colvec& b, arma::colvec& xinit, const double reltol, const double abstol, const int maxiter, const double rho, const double alpha);
RcppExport SEXP _ADMMadj5_admm_lad(SEXP ASEXP, SEXP bSEXP, SEXP xinitSEXP, SEXP reltolSEXP, SEXP abstolSEXP, SEXP maxiterSEXP, SEXP rhoSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::colvec& >::type xinit(xinitSEXP);
    Rcpp::traits::input_parameter< const double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< const double >::type abstol(abstolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< const double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(admm_lad(A, b, xinit, reltol, abstol, maxiter, rho, alpha));
    return rcpp_result_gen;
END_RCPP
}
// admm_lasso
Rcpp::List admm_lasso(const arma::mat& A, const arma::colvec& b, const double lambda, arma::colvec& xinit, const double reltol, const double abstol, const int maxiter, const double rho, const double alpha);
RcppExport SEXP _ADMMadj5_admm_lasso(SEXP ASEXP, SEXP bSEXP, SEXP lambdaSEXP, SEXP xinitSEXP, SEXP reltolSEXP, SEXP abstolSEXP, SEXP maxiterSEXP, SEXP rhoSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::colvec& >::type xinit(xinitSEXP);
    Rcpp::traits::input_parameter< const double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< const double >::type abstol(abstolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< const double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(admm_lasso(A, b, lambda, xinit, reltol, abstol, maxiter, rho, alpha));
    return rcpp_result_gen;
END_RCPP
}
// admm_rpca
Rcpp::List admm_rpca(const arma::mat& M, const double tol, const int maxiter, double mu, double lambda);
RcppExport SEXP _ADMMadj5_admm_rpca(SEXP MSEXP, SEXP tolSEXP, SEXP maxiterSEXP, SEXP muSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(admm_rpca(M, tol, maxiter, mu, lambda));
    return rcpp_result_gen;
END_RCPP
}
// admm_spca
Rcpp::List admm_spca(const arma::mat& Sigma, const double reltol, const double abstol, const int maxiter, double mu, double rho);
RcppExport SEXP _ADMMadj5_admm_spca(SEXP SigmaSEXP, SEXP reltolSEXP, SEXP abstolSEXP, SEXP maxiterSEXP, SEXP muSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< const double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< const double >::type abstol(abstolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    rcpp_result_gen = Rcpp::wrap(admm_spca(Sigma, reltol, abstol, maxiter, mu, rho));
    return rcpp_result_gen;
END_RCPP
}
// admm_sdp
Rcpp::List admm_sdp(arma::mat& C, arma::field<arma::mat>& listA, arma::vec b, double mymu, double myrho, double mygamma, int maxiter, double abstol, bool printer);
RcppExport SEXP _ADMMadj5_admm_sdp(SEXP CSEXP, SEXP listASEXP, SEXP bSEXP, SEXP mymuSEXP, SEXP myrhoSEXP, SEXP mygammaSEXP, SEXP maxiterSEXP, SEXP abstolSEXP, SEXP printerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< arma::field<arma::mat>& >::type listA(listASEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type mymu(mymuSEXP);
    Rcpp::traits::input_parameter< double >::type myrho(myrhoSEXP);
    Rcpp::traits::input_parameter< double >::type mygamma(mygammaSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type abstol(abstolSEXP);
    Rcpp::traits::input_parameter< bool >::type printer(printerSEXP);
    rcpp_result_gen = Rcpp::wrap(admm_sdp(C, listA, b, mymu, myrho, mygamma, maxiter, abstol, printer));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ADMMadj5_multipleinversion", (DL_FUNC) &_ADMMadj5_multipleinversion, 5},
    {"_ADMMadj5_admm_tv", (DL_FUNC) &_ADMMadj5_admm_tv, 8},
    {"_ADMMadj5_admm_bp", (DL_FUNC) &_ADMMadj5_admm_bp, 8},
    {"_ADMMadj5_admm_enet", (DL_FUNC) &_ADMMadj5_admm_enet, 8},
    {"_ADMMadj5_admm_genlasso", (DL_FUNC) &_ADMMadj5_admm_genlasso, 8},
    {"_ADMMadj5_admm_lad", (DL_FUNC) &_ADMMadj5_admm_lad, 8},
    {"_ADMMadj5_admm_lasso", (DL_FUNC) &_ADMMadj5_admm_lasso, 9},
    {"_ADMMadj5_admm_rpca", (DL_FUNC) &_ADMMadj5_admm_rpca, 5},
    {"_ADMMadj5_admm_spca", (DL_FUNC) &_ADMMadj5_admm_spca, 6},
    {"_ADMMadj5_admm_sdp", (DL_FUNC) &_ADMMadj5_admm_sdp, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_ADMMadj5(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
