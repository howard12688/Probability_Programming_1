// Programming_1-2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//lamda = 24/day
//T =  1 day

#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

class Poisson_Distribution {

public:
	double lamda;
	double T;
	double alpha; 
	int eggs;
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

int main()
{
	Poisson_Distribution poisson;
	ofstream ofs;

	poisson.lamda = 24;
	poisson.T = 0.1666667;
	poisson.alpha = poisson.lamda * poisson.T;
	ofs.open("pmf.txt");

	
	if (!ofs.is_open()) {
		cout << "Failed to open file.\n";
	}
	else {
		for (int egg = 1; egg <= 24; egg++) {
		poisson.eggs = egg;
		cout << "The probability of Poisson Distribution with " << egg << " egg(s) per 4 hours is ";
		printf("%E", poisson.DoPoissonDistribution());
		cout << endl<<endl;
		ofs  <<egg<<" "<< poisson.DoPoissonDistribution() << "\n";
	}
		
		ofs.close();
	}
	return 0;
}