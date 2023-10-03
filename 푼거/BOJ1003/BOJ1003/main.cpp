#include <iostream>

using namespace std;

int fiboarr[50] = { 0, 1, };

long fibo(int N) {
    if (N == 0 || N == 1) {
        return fiboarr[N];
    }
    else if (fiboarr[N] == 0) {
        fiboarr[N] = fibo(N - 1) + fibo(N - 2);
    }
    return fiboarr[N];
}

int main() {
    int T; cin >> T;
    int a;
    for (int i = 0; i < T; i++) {
        cin >> a;
        if (a == 0) cout << "1 0" << endl;
        else cout << fibo(a - 1) << " " << fibo(a) << endl;
    }
}