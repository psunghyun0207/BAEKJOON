#include <iostream>

using namespace std;

int main() {
	int N; cin >> N;
	string* s = new string[N];
	for (int i = 0; i < N; i++) cin >> s[i];

	int count = 0;

	
	for (int i = 0; i < N; i++) {
		int current = -1;
		bool apb[26] = { false, };
		int isC = 0;
		for (int j = 0; j < s[i].length(); j++) {
			if (current != s[i][j]) {
				if (apb[s[i][j] - 97] == true && current != -1) {
					isC = 1;
					break;
				}
				apb[s[i][j] - 97] = true;
				current = s[i][j];
			}
		}
		if (isC == 0) count++;
	}

	cout << count;
}