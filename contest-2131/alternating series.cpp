#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);

        if (n % 2 == 0) {
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) a[i] = -(i + 1);
                else a[i] = i + 1;
            }
        } else {
            a[0] = -1;
            a[1] = 3;
            a[2] = -1;
            for (int i = 3; i < n; i++) {
                if (i % 2 == 1) a[i] = i + 1;
                else a[i] = -(i + 1);
            }
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << (i + 1 == n ? '\n' : ' ');
        }
    }
    return 0;
}
