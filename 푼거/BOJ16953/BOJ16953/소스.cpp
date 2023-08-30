#include <iostream>

using namespace std;

int main() {
	long long a, b; cin >> a >> b;
	int count = 0;
	while (a != b) {
		if (a > b) {
			cout << "-1";
			return 0;
		}
		else if (b % 10 == 1) {
			b--;
			b /= 10;
		}
		else if (b % 2 == 0) {
			b /= 2;
		}
		else {
			cout << "-1";
			return 0;
		}
		count++;
	}
	cout << count + 1;
}