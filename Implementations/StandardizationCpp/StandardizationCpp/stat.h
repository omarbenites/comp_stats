#pragma once

#include<iostream>
#include<cmath>
#include "fstat.h"


/// Sample mean
double mean(std::vector<double> v) {
	double sum = 0;
	for (size_t i(0); i < v.size(); ++i) {
		sum = sum + v[i];
	}
	return sum / v.size();
}

//double variance(vector<double> b);

/// Sample variance
double variance(std::vector<double> v) {
	double sum = 0;
	double d0 = 0;
	double var = 0;
	for (size_t i(0); i < v.size(); ++i) {
		d0 = pow(v[i] - mean(v), 2);
		sum = sum + d0;
	}
	var = sum / (v.size() - 1);
	return(var);
}
