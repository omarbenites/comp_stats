/// Author: Omar Benites
/// Algorithm to implement the spread measurement "range"
/// Dec. 2018

#include<iostream>
#include<vector>

///Define struct (data structure to storage values)
struct Range{
 double max_val;
 double min_val;
};

///prototype
double max_ele(std::vector<double> elements);
double min_ele(std::vector<double> elements);
Range get_range(Range rg, std::vector<double> elements);

int main(){

Range input; //struc input
std::vector<double> v = {12,34,56,78.90,34.78,78,90}; //vector input

Range output = get_range(input, v);

std::cout<<"Imprimir el maximo valor de un vector: "<< output.max_val<<std::endl;
std::cout<<"Imprimir el minimo valor de un vector: "<< output.min_val<<std::endl;
//std::cout<<"Imprimir el minimo valor de un vector"<< rg.min_ele(elements);

return 0;
}

///def. max element in a vector
double max_ele(std::vector<double> elements)
{
       double m = elements[0];
       for(size_t i=0; i<elements.size(); i++){
           if(m>=elements[i]){
             m = m;
           } else {
             m = elements[i];
           }
       }
       return(m);
}

///def. min element in a vector
double min_ele(std::vector<double> elements)
{
       double m = elements[0];
       for(size_t i=0; i<elements.size(); i++){
           if(m<=elements[i]){
             m = m;
           } else {
             m = elements[i];
           }
       }
       return(m);
}

/// get range function
Range get_range(Range rg, std::vector<double> elements){
    rg.max_val = max_ele(elements);
    rg.min_val = min_ele(elements);
    return rg;
}

/// References:
/// How to use struct in functions 1: http://www.java2s.com/Tutorial/Cpp/0160__Structure/Returnstructurefromafunction.htm
/// How to use struct in functions 2: http://www.java2s.com/Tutorial/Cpp/0160__Structure/Returnstructurefromafunction.htm
