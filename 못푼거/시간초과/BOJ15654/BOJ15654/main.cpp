#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 10000

using namespace std;

vector<int> R;
vector<int> temp;
int visit[MAX] = { 0, };

bool check(int N) {
    for (int i = 0; i < N; i++) {
        if (visit[R[i]] == 0) return true;
    }
    return false;
}

void DFS(int idx, int N, int M) {
    if (idx == M) {
        for (int i = 0; i < M; i++) {
            cout << temp[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < N; i++) {
        if (visit[R[i]] == 0) {
            temp.push_back(R[i]);
            visit[R[i]] = 1;
            DFS(idx + 1, N, M);
            temp.pop_back();
            visit[R[i]] = 0;
        }
    }


    return;
}

int main() {
    int N, M; cin >> N >> M;

    for (int i = 0; i < N; i++) {
        int r; cin >> r;
        R.push_back(r);
    }
    sort(R.begin(), R.end());

    DFS(0, N, M);

    return 0;
}