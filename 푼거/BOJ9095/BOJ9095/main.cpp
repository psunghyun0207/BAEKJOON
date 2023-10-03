#include <iostream>

using namespace std;

int dp[11] = {0, 1, 2, 4, -1, -1, -1, -1, -1, -1, -1};

int DP(int n) {
	if (dp[n] == 0) return dp[n];
	return dp[n] = dp[n - 1] + dp[n - 2] + dp[n - 3];
}

int main() {
	int T; cin >> T;

	for (int i = 4; i < 11; i++) {
		DP(i);
	}

	for (int i = 0; i < T; i++) {
		int a; cin >> a;
		cout << dp[a] << endl;
	}
}