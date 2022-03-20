// Programming_1-2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//lamda = 24/day
//T =  1 day

#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

class Poisson_Distribution {
public:
	double lamda=1;
	double T=1;
	double alpha=1;
	int eggs=1;
	
	double DoPoissonDistribution();
	double factorial();

};

double Poisson_Distribution::factorial() {
	double factorial = 1;
	for (int i = 1; i <= eggs; i++) {
		factorial *= i;
	}
	return factorial;
}

double Poisson_Distribution::DoPoissonDistribution() {
	return pow(alpha, eggs) * exp(-alpha) / factorial();
}

class Binomial_Distribution {
public:
	double n=1;
	double x=1;
	double p=1;
	double factorial_n=1;
	double factorial_x=1;
	double factorial_nx=1;
	int eggs=1;

	double DoBinomialDistributioin();
	double combination();
};

double Binomial_Distribution::combination(){
	
	for (int i = 1; i <= n; i++) {
		factorial_n *= i;//cout << factorial_n << endl;
	}
	for (int i = 1; i <= x; i++) {
		factorial_x *= i;//cout << factorial_k  << endl;
	}
	for (int i = 1; i <= (n - x); i++) {
		factorial_nx *= i;//cout << factorial_nk << endl;
	}
	return factorial_n / factorial_x / factorial_nx;
}

double Binomial_Distribution::DoBinomialDistributioin() {
	return combination() * pow(p, x) * pow(1 - p, n - x);
}

int main()
{
	Poisson_Distribution poisson;

	poisson.lamda = 24;
	poisson.T = 0.1666667;
	poisson.alpha = poisson.lamda * poisson.T;
	poisson.eggs = 1;
	cout << "The probability of Poisson Random Variable is ";
	printf("%E", poisson.DoPoissonDistribution());
	cout << endl << endl;

	Binomial_Distribution binomial;
	binomial.n = 30;
	binomial.x = 1;
	binomial.p = 0.05;
	cout << "The probability of Binomial Random Variable is ";
	printf("%E", binomial.DoBinomialDistributioin());
	cout << endl << endl;

	return 0;
}