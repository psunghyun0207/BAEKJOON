#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, num1, num2, sum[1000000]{ 0 };

	cin >> T;

	for (int i = 0; i < T; i++) {

		cin >> num1;
		cin >> num2;

		sum[i] = num1 + num2;
	}
	for (int i = 0; i < T; i++) {

		cout << sum[i] << "\n";
	}
}