#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        vector<long long> ans;
        long long pow10 = 10;
        while (1 + pow10 <= n) {
            long long d = 1 + pow10;
            if (n % d == 0) {
                ans.push_back(n / d);
            }
            // avoid overflow (since n ≤ 1e18, pow10 must be ≤ 1e18)
            if (pow10 > (long long)1e18 / 10) break;
            pow10 *= 10;
        }

        if (ans.empty()) {
            cout << 0 << "\n";
        } else {
            sort(ans.begin(), ans.end());
            cout << ans.size();
            for (auto v : ans) cout << " " << v;
            cout << "\n";
        }
    }
    return 0;
}
