#include <iostream>

using namespace std;

int main() {

	int N, min = 1000000, max = -1000000;

	cin >> N;

	int num[N];

	for (int i = 0; i < N; i++) {

		cin >> num[i];

		if (num[i] < min) {

			min = num[i];
		}
		if (num[i] > max) {

			max = num[i];
		}

	}
	cout << min << " " << max << endl;
}