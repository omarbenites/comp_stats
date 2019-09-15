// Cumulative produc cumprod()

#include <Rcpp.h>
using namespace Rcpp;


// [[Rcpp::export]]

NumericVector cumprodC(NumericVector x){
  
  int n = x.size();
  NumericVector prod(n);
  prod[0]=1;
  for (int i=1; i<n; ++i){
    prod[i] = x[i]*prod[i-1]; 
  }
  return prod;
}




///*** R
///timesTwo(42)
///*/
