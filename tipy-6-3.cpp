#include <iostream>
using namespace std;

int main() {
    char s[10000];
    char next[10000];
    int len = 0;
    int n;

    char ch;
    cin.get(ch);
    while (ch != ' ') {
        s[len] = ch;
        len++;
        cin.get(ch);
    }

    cin >> n;

    for (int step = 1; step < n; step++) {
        int newLen = 0;
        int i = 0;

        while (i < len) {
            int j = i;

            while (j < len && s[j] == s[i]) {
                j++;
            }

            int cnt = j - i;

            next[newLen] = char('0' + cnt);
            newLen++;

            next[newLen] = s[i];
            newLen++;

            i = j;
        }
        for (int k = 0; k < newLen; k++) {
            s[k] = next[k];
        }
        len = newLen;
    }

    for (int i = 0; i < len; i++) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}