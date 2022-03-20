#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main(void) {
	ofstream ofs;

	int max = 8000;
	int winCount = 0, loseCount = 0;
	int i = 0, random = 0;
	ofs.open("output.txt");


	srand((unsigned)time(NULL));

	if (!ofs.is_open()) {
		cout << "Failed to open file.\n";
	}
	else {
		for (i = 0; i < max; i++) {
			random = 1 + rand() % max;
			if (random % 10 == 0) {
				winCount += 1;
			}
			else {
				loseCount += 1;
			}
		}
		cout << "Win: " << winCount << endl;
		cout << "Lose: " << loseCount << endl;
		ofs << winCount << " " << loseCount << endl;

	}
	return 0;
}
