#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int sevens = n / 7; sevens >= 0; sevens--)
    {
        int remaining = n - (sevens * 7);

        if (remaining % 4 == 0)
        {
            int fours = remaining / 4;

            cout << string(fours, '4') + string(sevens, '7') << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
