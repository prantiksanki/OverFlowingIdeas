#include <iostream>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    char grid[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int changes = 0;

    // Count incorrect directions in the last row
    for (int j = 0; j < m - 1; j++) {
        if (grid[n - 1][j] != 'R') {
            changes++;
        }
    }

    // Count incorrect directions in the last column
    for (int i = 0; i < n - 1; i++) {
        if (grid[i][m - 1] != 'D') {
            changes++;
        }
    }

    cout << changes << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
