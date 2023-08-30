#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;

	int count = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'c') {
			if (s[i + 1] == '=' || s[i + 1] == '-') {
				i++;
				count++;
			}
			else count++;
		}
		else if (s[i] == 'd') {
			if (s[i + 1] == '-') {
				i++;
				count++;
			}
			else if (s[i + 1] == 'z') {
				if (s[i + 2] == '=') {
					i += 2;
					count++;
				}
				else count++;
			}
			else count++;
		}
		else if (s[i] == 'l') {
			if (s[i + 1] == 'j') {
				i++;
				count++;
			}
			else count++;
		}
		else if (s[i] == 'n') {
			if (s[i + 1] == 'j') {
				i++;
				count++;
			}
			else count++;
		}
		else if (s[i] == 's') {
			if (s[i + 1] == '=') {
				i++;
				count++;
			}
			else count++;
		}
		else if (s[i] == 'z') {
			if (s[i + 1] == '=') {
				i++;
				count++;
			}
			else count++;
		}
		else count++;

	}
	cout << count;
}