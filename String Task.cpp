#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    string finalAns = "";

    for (char c : str) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            continue;
        }
        finalAns += '.';
        finalAns += c;
    }

    cout << finalAns << endl;
    return 0;
}
