#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

static inline ll sumBase3(ll n) {
    ll sum = 0;
    while (n) {
        sum += n % 3;
        n /= 3;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;

    vector<ull> powers3(40, 1);
    for (int i = 1; i < 40; ++i) {
        powers3[i] = powers3[i-1] * 3ull;
    }

    while (t--) {
        ll n;
        cin >> n;

        ll sum = sumBase3(n);
        ll m = (n - sum) / 2;

        vector<ull> count(1, (ull)n);
        ull additional = 0;
        int x = 0;

        while (m > 0) {
            if (x >= (int)count.size()) {
                count.push_back(0);
            }
            ull available = count[x] / 3ull;
            if (available == 0) {
                ++x;
                continue;
            }
            ull take = (ull)min<ll>(available, m);
            additional += take * powers3[x];
            count[x] -= take * 3ull;
            
            if (x + 1 >= (int)count.size()) {
                count.push_back(0);
            }
            count[x + 1] += take;
            m -= (ll)take;
        }

        cout << (3ull * (ull)n + additional) << "\n";
    }
    return 0;
}