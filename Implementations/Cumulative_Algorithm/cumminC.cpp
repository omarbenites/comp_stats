#include <Rcpp.h>
#include<algorithm>
using namespace Rcpp;

// [[Rcpp::export]]
NumericVector cumMinC(NumericVector x) {
  
  int n = x.size();
  NumericVector minvector(n);
  double minv = x[0];
  
  for (int i= 0; i<n; ++i){
    if( x[i] <= minv ){
      minv= x[i];
    }
  }
  
  for(int j =0; j <n; ++j ){
    minvector[j] = minv;
  }
  
  return minvector;
}

NumericVector cumMin(NumericVector y){
  
  
  std::
  
  
}

