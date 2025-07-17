#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        --k; // convert to 0-based
        vector<int> h(n);
        for (int i = 0; i < n; i++) cin >> h[i];

        int max_h = *max_element(h.begin(), h.end());
        vector<bool> visited(n, false);
        queue<pair<int, long long>> q; // {position, time}
        q.push({k, 0});
        visited[k] = true;
        bool can_reach = false;

        while (!q.empty()) {
            int pos = q.front().first;
            long long cur_time = q.front().second;
            q.pop();

            if (h[pos] == max_h) {
                can_reach = true;
                break;
            }

            for (int i = 0; i < n; i++) {
                if (!visited[i]) {
                    long long next_time = cur_time + abs(h[pos] - h[i]);
                    if (next_time + 1 <= h[i]) { // check destination tower's height
                        visited[i] = true;
                        q.push({i, next_time});
                    }
                }
            }
        }
        cout << (can_reach ? "YES" : "NO") << '\n';
    }
}