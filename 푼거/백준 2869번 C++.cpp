#include <iostream>

using namespace std;

int main() {

    int a, b, v;

    cin >> a >> b >> v;

    int D = 1;

    D += (v - a) / (a - b);

    if ((v - a) % (a - b) != 0) D++;
    if (a >= v) cout << "1";
    else cout << D;
}