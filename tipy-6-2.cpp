#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int w;
    cin >> w;
    int field[32][32];


    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            field[i][j] = 0;

    for (int k = 0; k < w; k++) {
        int r, c;
        cin >> r >> c;
        r--; c--;
        field[r][c] = -1;
    }

    int dr[8] = {-1, -1, -1,  0, 0,  1, 1, 1};
    int dc[8] = {-1,  0,  1, -1, 1, -1, 0, 1};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (field[i][j] == -1) continue;
            int cnt = 0;
            for (int d = 0; d < 8; d++) {
                int ni = i + dr[d];
                int nj = j + dc[d];
                if (ni >= 0 && ni < n && nj >= 0 && nj < m && field[ni][nj] == -1)
                    cnt++;
            }
            field[i][j] = cnt;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (field[i][j] == -1)
                cout << '*';
            else
                cout << field[i][j];
        }
        cout << endl;
    }

    return 0;
}