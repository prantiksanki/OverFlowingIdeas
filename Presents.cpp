#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n + 1), result(n + 1);

    // Read input and store gift givers
    for (int i = 1; i <= n; ++i) {
        cin >> p[i];
    }

    // Determine the friend who gave a gift to each friend
    for (int i = 1; i <= n; ++i) {
        result[p[i]] = i;
    }

    // Output the result
    for (int i = 1; i <= n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
