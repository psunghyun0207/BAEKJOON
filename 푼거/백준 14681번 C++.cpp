#include <iostream>

using namespace std;

int Quadrant(int a, int b);

int main() {

	int p1, p2;

	cin >> p1;
	cin >> p2;

	cout << Quadrant(p1, p2) << endl;
}

int Quadrant(int a, int b) /* (a != 0, b != 0) */ {

	if (a < 0) {

		if (b < 0) {
			return 3;
		}
		else {
			return 2;
		}
	}
	else {

		if (b < 0) {
			return 4;
		}
		else {
			return 1;
		}
	}
}