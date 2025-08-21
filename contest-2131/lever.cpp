#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        int ans = 0;

        while (true) {
            ans++;

             bool decreased = false;
            for (int i = 0; i < n; i++) {
                if (a[i] > b[i]) {
                    a[i]--;
                    decreased = true;
                    break;
                }
            }

             for (int i = 0; i < n; i++) {
                if (a[i] < b[i]) {
                    a[i]++;
                    break;
                }
            }

             if (!decreased) break;
        }

        cout << ans << "\n";
    }
}
