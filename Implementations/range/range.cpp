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

///definition of function
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

///definition of function
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


Range get_range(Range rg, std::vector<double> elements){
    rg.max_val = max_ele(elements);
    rg.min_val = min_ele(elements);
    return rg;
}
