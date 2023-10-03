#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> P;

int main() {
	int N; cin >> N;
	P.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> P[i];
	}

	sort(P.begin(), P.end());

	int answer = 0;

	for (int i = N; i >= 1; i--) {
		answer += i * (P[N - i]);
	}

	cout << answer;
}