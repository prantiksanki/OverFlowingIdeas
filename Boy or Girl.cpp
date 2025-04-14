#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string str;
    cin >> str;

    set<char> uniqueChars(str.begin(), str.end());

    if (uniqueChars.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
