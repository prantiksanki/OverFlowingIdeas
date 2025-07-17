#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int max_diff = -1;

        for (int l = 0; l < n; ++l) {
            for (int r = l; r < n; ++r) {
                vector<int> subarray;
                for (int i = l; i <= r; ++i) {
                    subarray.push_back(a[i]);
                }

                sort(subarray.begin(), subarray.end());
                int k = subarray.size();
                int median_index = ceil((double)(k + 1) / 2) - 1;
                int median = subarray[median_index];
                int min_val = *min_element(subarray.begin(), subarray.end());
                max_diff = max(max_diff, median - min_val);
            }
        }

        cout << max_diff << endl;
    }
    return 0;
}