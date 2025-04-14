#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int odd = 0, even = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        if (x % 2 == 0)
            even++;
        else
            odd++;
    }

    if (sum % 2 == 1)
    {
        cout << "YES\n";
    } else if (odd > 0 && even > 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
