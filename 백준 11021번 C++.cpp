#include <iostream>

using namespace std;

int main() {

	int T, num1, num2, sum[100]{ 0 };

	cin >> T;

	for (int i = 0; i < T; i++) {

		cin >> num1;
		cin >> num2;

		sum[i] = num1 + num2;
	}
	for (int i = 0; i < T; i++) {

		cout << "Case #" << i + 1 << ": " << sum[i] << "\n";
	}
}