
#include<iostream>
#include<vector>
using namespace std ;

int main()
{
    int n , m ;
    cin >> n >> m ;
    if(n == m)
    {
        cout << 0 << endl ;
        return 0 ;

    }

    if((m%n) != 0)
    {
        cout << -1 << endl ;
        return 0 ;
    }

    int mod = m/n ;

    int steps = 0 ;
    while (mod % 2 == 0)
    {
        mod /= 2;
        steps++;
    }

    while (mod % 3 == 0) {
        mod /= 3;
        steps++;
    }

    if (mod != 1) {
        cout << -1 << endl;
    } else {
        cout << steps << endl;
    }

    return 0;
}
