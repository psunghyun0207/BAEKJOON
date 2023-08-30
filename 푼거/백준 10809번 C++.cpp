#include <iostream>
#include <string.h>

using namespace std;

int main() {

    int num[26];
    string str;

    cin >> str;

    for (int i = 0; i < 26; i++) {

        num[i] = -1;
    }
    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j < 26; j++) {

            if (str[i] == j + 65 || str[i] == j + 97) {
                if (num[j] == -1) num[j] = i;
            }
        }
    }
    for (int i = 0; i < 26; i++) {

        cout << num[i] << " ";
    }
}