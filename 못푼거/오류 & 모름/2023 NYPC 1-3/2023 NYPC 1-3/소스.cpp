#include <iostream>
#include <vector>

using namespace std;

vector<int> dp;

int main() {
	int K; cin >> K;
	string X; cin >> X;

	int num = 0;
	int g = 1;

	for (int i = K - 1; i >= 0; i--) {
		num += (X[i] - 48) * g;
		g *= 2;
	}

	dp[1] = 1;
	dp[2] = 1;

}