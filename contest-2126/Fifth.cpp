#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> pref(n), suff(n);
        for (int i = 0; i < n; ++i) cin >> pref[i];
        for (int i = 0; i < n; ++i) cin >> suff[i];

        bool ok = true;
        for (int i = 0; i < n; ++i) {
            if (gcd(pref[i], suff[i]) != pref[i] && gcd(pref[i], suff[i]) != suff[i]) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "Yes" : "No") << endl;
    }
}