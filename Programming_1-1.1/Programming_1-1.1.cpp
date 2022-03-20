#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main(void) {
	ofstream ofs;

	int max = 8000;
	int winCount = 0, loseCount = 0;
	double winPro = 0.0, losePro = 0.0;
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
		
		winPro = (double)winCount / 8000;
		losePro = (double)loseCount / 8000;
		ofs << scientific << winPro << " " << scientific << losePro << endl;
	}
	return 0;
}
