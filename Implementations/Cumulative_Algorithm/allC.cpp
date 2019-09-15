/// Mimic `all()` functionality in Rcpp
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]

bool allC(LogicalVector x) {
  int n = x.size();
  
  for(int i = 0; i < n; ++i) {
    if (x[i]){
      return true;
    } else {
      break;
    }
  }
  return false;
}



// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically 
// run after the compilation.
//

////*** R
//timesTwo(42)
///*/
