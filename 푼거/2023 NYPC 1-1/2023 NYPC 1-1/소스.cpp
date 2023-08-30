#include <iostream>
#include <vector>

using namespace std;

vector<string> all;
vector<string> cpt;
vector<string> result;
vector<string> NOTFOUND;

bool search(int N, int cnt, string find) {
	for (int i = 0; i < N - cnt; i++) {
		if (find == NOTFOUND[i]) {
			return false;
		}
	}

	for (int i = 0; i < N; i++) {
		if (all[i] == find) {
			result[i] = "NOTFOUND";
			NOTFOUND.push_back(find);
			return true;
		}
	}
	return false;
}

int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		string a; cin >> a;
		all.push_back(a);
		result.push_back(a);
	}
	int K; cin >> K;
	for (int i = 0; i < K; i++) {
		string a; cin >> a;
		cpt.push_back(a);
	}

	int cnt = all.size();

	for (int i = 0; i < K; i++) {
		if (search(N, cnt, cpt[i])) {
			cnt--;
		}
	}

	cout << cnt << endl;
	for (int i = 0; i < N; i++) {
		if(result[i] != "NOTFOUND")
		cout << result[i] << endl;
	}
}