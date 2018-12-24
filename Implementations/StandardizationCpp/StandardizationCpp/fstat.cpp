#include <math.h>
#include "fstat.h"
/// Sample mean
double mean(std::vector<double> v1) {
	double sum = 0;
	int n = 0;
	for (size_t i(0); i < v1.size(); ++i) {
		sum = sum + v1[i];
		n = n + 1;
	}
	return sum / n;
}


/// Sample variance
double variance(std::vector<double> v) {
	double sum = 0;
	double d0 = 0;
	double var = 0;
	int n=0;
	for (size_t i(0); i < v.size(); ++i) {
		d0 = pow(v[i] - mean(v), 2);
		sum = sum + d0;
		n = n + 1;
	}
	var = sum / (n - 1);
	return(var);
}