#include <iostream>
#include <vector>

using namespace std;

vector<int> coins;

int main() {
	int N, K; cin >> N >> K;

	coins.resize(N);
	for (int i = 0; i < N; i++) cin >> coins[i];

	int answer = 0;
	while (K != 0) {
		for (int i = N - 1; i >= 0; i--) {
			if (coins[i] <= K) {
				K -= coins[i];
				answer++;
				break;
			}
		}
	}

	cout << answer;
}