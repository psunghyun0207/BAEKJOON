#include <iostream>

using namespace std;

int main() {

	int sco;
	char res;
	cin >> sco;

	if (sco >= 90) {
		res = 'A';
	}
	else if (sco >= 80) {
		res = 'B';
	}
	else if (sco >= 70) {
		res = 'C';
	}
	else if (sco >= 60) {
		res = 'D';
	}
	else {
		res = 'F';
	}

	cout << res << endl;
}