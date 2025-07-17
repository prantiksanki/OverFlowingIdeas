#include <iostream>
#include <vector>
using namespace std;

struct Edge {
    int u, v, c;
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> color(n + 1);
        for (int i = 1; i <= n; ++i) cin >> color[i];

        vector<Edge> edges;
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < n - 1; ++i) {
            int u, v, c;
            cin >> u >> v >> c;
            edges.push_back({u, v, c});
            adj[u].push_back(i);
            adj[v].push_back(i);
        }

        long long total_cost = 0;
        for (auto& e : edges) {
            if (color[e.u] != color[e.v]) total_cost += e.c;
        }

        for (int qi = 0; qi < q; ++qi) {
            int v, x;
            cin >> v >> x;
            long long cost_diff = 0;

            // Calculate the cost difference before changing the color
            for (int idx : adj[v]) {
                auto& e = edges[idx];
                int u = (e.u == v ? e.v : e.u);
                if (color[v] != color[u]) cost_diff -= e.c;
                if (x != color[u]) cost_diff += e.c;
            }

            color[v] = x;
            total_cost += cost_diff;
            cout << total_cost << '\n';
        }
    }
}