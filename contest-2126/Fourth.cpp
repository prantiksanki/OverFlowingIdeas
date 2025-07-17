// Wrong test case

// 2 5
// 1 10 5
// 3 6 5

// My output - 10
// Actual output :- 5



#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> vec(n, vector<int>(3));
        for (int i = 0; i < n; ++i) {
            int l, real, r;
            cin >> l >> real >> r;
            vec[i][0] = l;
            vec[i][1] = r;
            vec[i][2] = real;
        }

        sort(vec.begin(), vec.end(), [](const vector<int>& a, const vector<int>& b){
            return a[0] < b[0];
        });

        priority_queue<pair<int, int>> pq; // {real, index}
        int idx = 0;
        int ans = k;
        vector<bool> used(n, false);

        while (true) {
            while (idx < n && vec[idx][0] <= k) {
                if (vec[idx][1] >= k) {
                    pq.push({vec[idx][2], idx});
                }
                ++idx;
            }

            bool found = false;
            while (!pq.empty()) {
                int i = pq.top().second;
                pq.pop();
                int l = vec[i][0], r = vec[i][1], real = vec[i][2];
                if (!used[i] && l <= k && k <= r) {
                    k = real;
                    ans = k;
                    used[i] = true;
                    found = true;
                    break;
                }
            }
            if (!found) break;
        }
        cout << ans << '\n';
    }
}
