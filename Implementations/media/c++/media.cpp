#include<iostream>
#include<string>
#include<vector>

using namespace std;
/// prototype
double mean(vector<double> elements);

int main(){
vector<double> val(5,4.5);
cout<< "La media de los valores es "<< mean(val)<< endl;

return 0;
}
/// definition
double mean(vector<double> v){
   double sum = 0;
   for(size_t i(0); i<v.size(); ++i){
      sum = sum + v[i];
   }
  return sum/v.size();
}

