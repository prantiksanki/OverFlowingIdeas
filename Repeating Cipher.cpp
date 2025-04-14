#include <iostream>
using namespace std;

int main() {
    int n;
    string str;
    cin >> n >> str;

    int ptr = 0;
    string ans = "";

    for (int i = 1; ptr < n; i++)
    {
        ans += str[ptr];
        ptr += i;
    }

    cout << ans << endl;
}
