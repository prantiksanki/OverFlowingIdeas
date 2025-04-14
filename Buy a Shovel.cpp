#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    for (int i = 1; i <= 10; i++)
    {
        int temp = k * i;
        int lastDigit = temp % 10;

        if (lastDigit == r || lastDigit == 0)
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
