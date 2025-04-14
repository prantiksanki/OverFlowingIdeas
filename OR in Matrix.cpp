#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> B(m, vector<int>(n));
    vector<vector<int>> A(m, vector<int>(n, 1));

    // Input matrix B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }

    // Step 1: Construct A based on B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (B[i][j] == 0) {
                // If B[i][j] is 0, make entire row i and column j zero in A
                for (int k = 0; k < n; k++) A[i][k] = 0; // Zero out row i
                for (int k = 0; k < m; k++) A[k][j] = 0; // Zero out column j
            }
        }
    }

    // Step 2: Verify A by generating B'
    vector<vector<int>> B_check(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) B_check[i][j] |= A[i][k]; // Row OR
            for (int k = 0; k < m; k++) B_check[i][j] |= A[k][j]; // Column OR
        }
    }

    // Step 3: Check if B_check matches B
    if (B_check != B) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
