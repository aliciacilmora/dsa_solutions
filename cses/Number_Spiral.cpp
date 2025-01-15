#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long row, col;
        cin >> row >> col;

        long long diag = max(row, col);
        long long base = diag * diag - diag + 1;

        if (diag % 2 == 1) {
            if (col > row)
                cout << base + (col - row) << endl;
            else
                cout << base - (row - col) << endl;
        } else {
            if (col > row)
                cout << base - (col - row) << endl;
            else
                cout << base + (row - col) << endl;
        }
    }
    return 0;
}
