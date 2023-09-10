#include <bits/stdc++.h>

using namespace std;

int main() {
    int x[] = {1, 2, 3, 4, 5};
    int y[] = {1, 8, 27, 64, 125};
    int n = sizeof(x) / sizeof(x[0]);

    int diffTable[n][n];

    for (int i = 0; i < n; i++) {
        diffTable[i][0] = y[i];
    }

    
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            diffTable[i][j] = diffTable[i + 1][j - 1] - diffTable[i][j - 1];
        }
    }

    cout << "Difference Table:\n";
    for (int i = 0; i < n; i++) {
        cout << x[i] << "\t";
        for (int j = 0; j <= i; j++) {
            cout << diffTable[i - j][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
