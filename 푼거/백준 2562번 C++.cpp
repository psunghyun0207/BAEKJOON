#include <iostream>

using namespace std;

int main() {

	int max = 0, num, line;

	for (int i = 0; i < 9; i++) {

		cin >> num;

		if (num > max) {

			max = num;
			line = i + 1;
		}

	}
	cout << max << "\n";
	cout << line << "\n";
}