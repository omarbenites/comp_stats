/// Standardization of variables
#include<iostream>
#include<vector>
#include<math.h>
#include "D:\Github_Repos\comp_stats\Implementations\Header Files\stat_functions.h"

using namespace std;

int main(){

vector<double> v{1.1,2.3,45.7,78,90,45.78};
vector<double> z;

for(size_t i(0); i<v.size(), ++i ){
    z[i] = (v[i] - mean(v[i]))/variance(v[i]);
    cout<<z[i];
}

return 0;
}
