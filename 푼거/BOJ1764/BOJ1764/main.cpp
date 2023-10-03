#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> nohear;
vector<string> answerV;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M; cin >> N >> M;

	nohear.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> nohear[i];
	}

	sort(nohear.begin(), nohear.end());

	for (int i = 0; i < M; i++) {
		string nosee; cin >> nosee;
		if (binary_search(nohear.begin(), nohear.end(), nosee)) answerV.push_back(nosee);
	}

	sort(answerV.begin(), answerV.end());

	cout << answerV.size() << "\n";
	for (auto o : answerV) cout << o << "\n";
}