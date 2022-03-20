#include <iostream>
#include <cmath>

using namespace std;

float combination(int  n, int k) {
	double factorial_n = 1;
	double factorial_k = 1;
	double factorial_nk = 1;

	for (int i = 1; i <= n; i++) {
		factorial_n *= i;//cout << factorial_n << endl;
	}
	for (int i = 1; i <= k; i++) {
		factorial_k *= i;//cout << factorial_k  << endl;
	}
	for (int i = 1; i <= (n-k); i++) {
		factorial_nk *= i;//cout << factorial_nk << endl;
	}
	cout << factorial_n / factorial_k / factorial_nk << endl;
	return factorial_n / factorial_k / factorial_nk;
}

float randomBinomialProbability(int n, int k, float p) {
	return combination(n, k) * pow(p, k) * pow(1 - p, n - k);
}

int main() {
	int n = 20;
	int winCin = 0;
	double p = 0.1;
	
	cout << "Enter winning time(s) : ";
	do {
		cin >> winCin;
		if (winCin > 20) {
			cout << "You need to enter an integer equal or less than 20." << endl;
			cout << "Enter winning time(s) :";
		}
	} while (winCin > 20);
	float binomial_Random_Variable = randomBinomialProbability(n, winCin, p);
	cout << "The probability of " << winCin << " time(s) winning is";
	printf(" % E", binomial_Random_Variable);
	return 0;
}



