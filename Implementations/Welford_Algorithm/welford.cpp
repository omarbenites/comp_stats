#include <Rcpp.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace Rcpp;

// [[Rcpp::export]]
double meanOnline(NumericVector x) {
  
  int n = x.size();
  double xn = x[n]; 
  
  //std::vector<double> v = x;
  
  if(n==1){
    return(x[0]);
  }else {
    x.erase(n);//remove the last element 
    //recursion
    double p=  meanOnline(x) + (xn-meanOnline(x))/n ;
    return p;
  }
  
}



// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically 
// run after the compilation.
//


