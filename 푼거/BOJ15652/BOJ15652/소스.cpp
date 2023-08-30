#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;

void calc(int count, int current, int N, int M) {
	if (count == M) {
		for (auto a : arr) {
			cout << a << " ";
		}
		cout << endl;

		return;
	}

	for (int i = 1; i <= N; i++) {
		if (current > i) continue;
		arr.push_back(i);

		calc(count + 1, i, N, M);

		arr.pop_back();
	}
}

int main() {
	int N, M; cin >> N >> M;

	calc(0, 1, N, M);
}