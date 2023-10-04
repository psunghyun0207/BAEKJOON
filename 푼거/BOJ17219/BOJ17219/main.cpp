#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<string, string> q;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M; cin >> N >> M;
	
	for (int i = 0; i < N; i++) {
		string site, password; cin >> site >> password;
		q.insert(make_pair(site, password));
	}

	for (int i = 0; i < M; i++) {
		string find; cin >> find;
		cout << q[find] << "\n";
	}
}