/// Author: Omar Benites
/// Algorithm to implement the spread measurement percentile using the nearest-rank method.
/// Dec. 2018

/// The kth percentile is a value in a data set that
/// splits the data into two pieces: The lower piece contains k percent
/// of the data, and the upper piece contains the rest
/// of the data (which amounts to [100 – k] percent,
/// because the total amount of data is 100%). Note: k is any number between 0 and 100.

/// Reference
// Hyndman https://www.jstor.org/stable/2684934 , method number 7

#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <limits.h>

//prototypes
double percentile(std::vector<double> v, double k);
double iqr(std::vector<double> v );

int main(){

std::vector<double> v = {15, 20, 35, 40, 50};
std::vector<double> v2 = {};
double k = 0.4  ;
double q = percentile(v, k);
std::cout<<"The value of the percentile 40 is "<< q <<std::endl;
std::cout<<"The first quantile(Q0) is: "<<percentile(v, 0.0)<<std::endl;
std::cout<<"The first quantile(Q1) is: "<<percentile(v, 0.25)<<std::endl;
std::cout<<"The second quantile(Q2) is: "<<percentile(v, 0.50)<<std::endl;
std::cout<<"The third quantile(Q3) is: "<<percentile(v,  0.75)<<std::endl;
std::cout<<"IQR of v is equal to : "<<iqr(v)<<std::endl;
std::cout<<"Null case"<<percentile(v2, 0.26)<<std::endl;

return 0;
}

//quantile algorithm
// v: data
// k: value between 0 and 1
double percentile(std::vector<double> v, double k){

    int n = v.size(), elei, elei1; //number of elements, i-nsim and i+1 nsim element
    double vrank, fractpart, intpart, pev;

    //double fractpart, intpart, idx, qn;
    ///1: step sort values from smallest to largest (algorithm library )
    std::sort(v.begin(), v.end());

    if(n==0){
       pev = std::numeric_limits<double>::quiet_NaN();
    } else {

    ///2:  Get the integer and fractional part of the rank
    vrank = k*(n - 1)+1;
    fractpart =  std::modf(vrank , &intpart);//calculate fractpart and intpart, the latter one using passing by reference.


   ///3: Find the element at rank
   ///we need to find the element corresponding to the i-enesim and i+1 esim element
    elei = v[intpart-1];
    elei1  =  v[intpart] ;
    //std::cout<<elei <<std::endl;
    //std::cout<<elei1<<std::endl;

   ///4: Calculate percentiles
   pev = elei + fractpart*(elei1 - elei);

}
return (pev);
///2: Multiply k percent by the total number of values, n.
/// Rank is the position of an element in the dataset. For example, rank 1 is the first element, 2 is the second. This value can be a decimal,
//for example, 3.35 will be used to find the value between the third and fourth elements.
//    idx = k*n/100 ; ///This number is called the index and round it
//    ///3: get decimal part
//    ///std::cout<<idx;
//    fractpart = std::modf(idx , &intpart);
//    if(fractpart!=0.0){
//        i = ceil(idx); //round to the inmediate upper value
//        qn = v[i];
//    }else {
//        qn = (v[idx] + v[idx+1])/2;
//    }
//   return (qn);
}

///IQR: Interquartile range

double iqr(std::vector<double> v ){
double iqr;
iqr = percentile(v, 0.75)- percentile(v, 0.25);
return (iqr);
}


