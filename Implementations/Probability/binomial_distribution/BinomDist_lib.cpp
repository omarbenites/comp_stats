///Here we use the binomial distribution implemented by the random library in C++
///Binomial distribution
//Definition: (Binomial distribution). Suppose that n independent Bernoulli trials
//are performed, each with the same success probability p. Let X be the number of
//successes.
// Parameters:
//  n : number of trials
//  p: probability of success
// Bibliography:  Blitzein HK.- W.Hang pagina 100

#include<iostream>
#include<random>

int main(){

//This is an ubiquotous distribution
//Paramters of Binomial distribution

int n = 20; //number of trials
double p = 0.25; //probability of success

std::binomial_distribution<> binomial_d(n,p); //binomial distribution

std::cout<<binomial_d<<std::endl;


return 0;
}

