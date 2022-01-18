#include <iostream>

using namespace std;

int main() {

	int num1, num2, one = 0, two = 0, thr = 0;

	cin >> num1;
	cin >> num2;

	one = num2 % 10;
	two = (num2 / 10) % 10;
	thr = num2 / 100;

	cout << num1 * one << endl;
	cout << num1 * two << endl;
	cout << num1 * thr << endl;
	cout << num1 * num2 << endl;
}