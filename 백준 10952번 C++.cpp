#include <iostream>

using namespace std;

int main() {

	int i, num1, num2, sum[1000]{ 0 };

	for (i = 0; ; i++) {

		cin >> num1;
		cin >> num2;

		if (num1 == 0 && num2 == 0) break;

		sum[i] = num1 + num2;
	}
	for (int j = 0; j < i; j++) {

		cout << sum[j] << endl;
	}
}