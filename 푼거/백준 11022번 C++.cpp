#include <iostream>

using namespace std;

int main() {

	int num1[100], num2[100], N;

	cin >> N;

	for (int i = 0; i < N; i++) {

		cin >> num1[i] >> num2[i];
	}
	for (int i = 0; i < N; i++) {

		cout << "Case #" << i + 1 << ": " << num1[i] << " + " << num2[i] << " = " << num1[i] + num2[i] << "\n";
	}
}