#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mac[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {          
            int s = i + j;
            if (s < n - 1)mac[i][j] = 0; 
            else if (s == n-1)mac[i][j] = 1; 
            else mac[i][j] = 2; 
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j) cout << ' ';
            cout << mac[i][j];
        }
        cout <<endl;
    }
    return 0;
}