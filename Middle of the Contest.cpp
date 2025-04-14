#include <iostream>
#include <string>
using namespace std;

int main() {
    string st1, st2;
    cin >> st1 >> st2;

    string m1 = "", m2 = "";
    m1 = m1 + st1[3] + st1[4];
    m2 = m2 + st2[3] + st2[4];

    string h1 = "", h2 = "";
    h1 = h1 + st1[0] + st1[1];
    h2 = h2 + st2[0] + st2[1];

    int h11 = stoi(h1);
    int h22 = stoi(h2);
    int m11 = stoi(m1);
    int m22 = stoi(m2);

    int totTime1 = (h11 * 60) + m11;
    int totTime2 = (h22 * 60) + m22;

    int mean = (totTime1 + totTime2) / 2;

    int ansHr = mean / 60;
    int ansMin = mean % 60;

    if (ansHr < 10) cout << "0";
    cout << ansHr << ":";

    if (ansMin < 10) cout << "0";
    cout << ansMin << endl;

    return 0;
}
