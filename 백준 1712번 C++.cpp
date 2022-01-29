#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	if (num2 - num3 >= 0) cout << "-1";
	else cout << num1 / (num3 - num2) + 1;
}