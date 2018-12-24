#include<iostream>
#include <vector>
#include <math.h>

using namespace std;

double mean(vector<double> elements);
double variance(vector<double> v);

int main(){

    vector<double> v{1.4,1.34,7.8,1.20};
    long double var;
    var = variance(v);
    cout<<"The variance of v is "<< var;
    return 0 ;

}


double mean(vector<double> v){
   double sum = 0;
   for(size_t i(0); i<v.size(); ++i){
      sum = sum + v[i];
   }
  return sum/v.size();
}

double variance (vector<double> v){
    double sum = 0;
    double d0 = 0;
    double var = 0;
    for(size_t i(0); i<v.size(); ++i ){
       d0 = pow(v[i]- mean(v),2);
       sum = sum + d0;
    }
    var = sum/(v.size()-1);
    return(var);
}

