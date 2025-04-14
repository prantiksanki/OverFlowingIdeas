#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cin >> str;

    vector<int> store;

     for (int i = 0; i < str.length(); i++) {
        if (str[i] == '1') {
            store.push_back(1);
        } else if (str[i] == '2') {
            store.push_back(2);
        } else if (str[i] == '3') {
            store.push_back(3);
        }
    }

     sort(store.begin(), store.end());

     string ans;
    for (int i = 0; i < store.size(); i++)
    {
        ans += to_string(store[i]);
        if (i < store.size() - 1)
        {
            ans += '+';
        }
    }

    cout << ans << endl;
    return 0;
}
