//// Two-Pass Algorithm Variance

#include <Rcpp.h>
#include <iostream>
using namespace Rcpp;


// [[Rcpp::export]]
double twopassVar(NumericVector x) {
    
    int n = x.size();
    double sum1=0.0, sum2=0.0;  
    
    ///Calculate the mean
    for(int i=0; i<n; ++i){
      sum1 += x[i];
    } 
    double meanS = sum1/n;
    
    ///std::cout<<"media"<<meanS;
    
    ///Sum of squares
    for(int j=0; j<n; ++j){
      
      sum2 += (x[j]- meanS)*(x[j]-meanS);
      ///std::cout<<"variance "<<sum2;
    }
    double varianceS = sum2/(n-1);
    
    return varianceS;
    
}


// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically 
// run after the compilation.

