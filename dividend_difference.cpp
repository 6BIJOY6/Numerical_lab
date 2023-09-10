//Id:c201016
//dividend difference
#include <bits/stdc++.h>

using namespace std;

int main() {
    int x[] = {5, 7, 11, 13, 21};
    int y[] = {150, 392, 1452, 2366, 9702};
    int n = sizeof(x) / sizeof(x[0]);

    double dividedDiffTable[n][n];

    for (int i = 0; i < n; i++) {
        dividedDiffTable[i][0] = y[i];
    }

    
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            dividedDiffTable[i][j] = (dividedDiffTable[i + 1][j - 1] - dividedDiffTable[i][j - 1]) / (x[i + j] - x[i]);
        }
    }

    cout << "Divided Difference Table:\n";
    for (int i = 0; i < n; i++) {
        cout << x[i] << "\t";
        for (int j = 0; j <= i; j++) {
            cout << dividedDiffTable[i - j][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
