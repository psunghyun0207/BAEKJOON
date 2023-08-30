#include <iostream>
#include <set>

using namespace std;

set<string> s;

void reset() {
	while (!s.empty()) s.clear();
}

int main() {
	int N; cin >> N;
	int count = 0;

	for (int i = 0; i < N; i++) {
		string Log; cin >> Log;
		if (Log == "ENTER") {
			reset();
		}
		else {
			if (s.find(Log) == s.end()) count++;
			s.insert(Log);
		}
	}
	cout << count;
}