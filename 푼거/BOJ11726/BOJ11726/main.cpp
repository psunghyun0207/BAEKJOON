#include <iostream>
#define MAX 1000

using namespace std;

int dp[MAX]{ 1, 1, };

void tiling(int n) {
	dp[n] = (dp[n - 1] + dp[n - 2]) % 10007;
}

int main() {
	int N; cin >> N;

	for (int i = 2; i <= N; i++) {
		tiling(i);
	}

	cout << dp[N];
}