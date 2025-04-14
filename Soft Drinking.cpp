#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

     int totDrink = k * l;

     int totLime = c * d;

     int drinkPerPerson = totDrink / nl;
    int limePerPerson = totLime;
    int saltPerPerson = p / np;

     int ans = min({drinkPerPerson, limePerPerson, saltPerPerson}) / n;

    cout << ans << endl;
    return 0;
}

