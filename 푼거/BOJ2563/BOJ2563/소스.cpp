#include <iostream>

using namespace std;

bool map[100][100] = { false, };

void paint(int x, int y) {
	int dy = y;
	for (int i = 0; i < 10; i++) {
		int dx = x;
		for (int j = 0; j < 10; j++) {
			map[dx][dy] = true;
			dx++;
		}
		dy++;
	}
}

int main() {

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		paint(a, b);
	}

	int count = 0;

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (map[i][j] == true) {
				count++;
			}
		}
	}
	cout << count;
}