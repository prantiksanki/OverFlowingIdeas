#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> S(n), T(n);
        for (auto &x : S) cin >> x;
        for (auto &x : T) cin >> x;

        multiset<long long> ms(T.begin(), T.end());
        bool ok = true;

        for (auto s : S) {
            long long r1 = s % k;
            long long r2 = (k - r1) % k;

            auto it = ms.end();

            // Try to find a match with same remainder
            it = find_if(ms.begin(), ms.end(), [&](long long val) {
                long long rv = val % k;
                return rv == r1 || rv == r2;
            });

            if (it != ms.end()) {
                ms.erase(it);
            } else {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}
