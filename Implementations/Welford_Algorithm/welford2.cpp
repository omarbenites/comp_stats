#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
double meanWelfort( int n_m, double old_m, double new_val) {

  double new_m ; 
  n_m++;
  new_m = old_m + (new_val - old_m)/n_m;
  
  return new_m;
}


// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically 
// run after the compilation.
//

/*** R
meanWelfort(2, 0.5,2)
*/
