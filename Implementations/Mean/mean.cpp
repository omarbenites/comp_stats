#include<Rcpp.h>
using namespace Rcpp;
// [[Rcpp::export]]
double meanC(NumericVector x){
  int n  = x.size();
  double total = 0;
  
  for(int i= 0; i<n; ++i){
      total += x[i];
      //total = x[i] + total
  }
  return total/n;
  
}
