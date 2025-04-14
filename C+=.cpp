#include <iostream>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int a,b,n ;
        cin >> a >> b >> n ;
        long long sum = 0 ;
        int c = 0 ;
        while(sum <= n)
        {
            if(a <= b)
            {
                a += b ;
                sum = a  ;
                c++ ;
            }
            else if(a > b)
            {
                b += a  ;
                sum = b ;
                c++;
            }
            else if(sum > n)
            {
                break ;
            }
        }
        cout << c << endl ;
    }
}
