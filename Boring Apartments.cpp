#include <iostream>
using namespace std;

int countKeypresses(int x)
{
    int digit = x % 10;
    int length = 0, temp = x;

     while (temp > 0)
    {
        length++;
        temp /= 10;
    }

     return (digit - 1) * 10 + (length * (length + 1)) / 2;
}

int main()
{
    int t, x;
    cin >> t;

    while (t--)
    {
        cin >> x;
        cout << countKeypresses(x) << endl;
    }

    return 0;
}
