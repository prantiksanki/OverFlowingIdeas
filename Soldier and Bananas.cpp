
#include<iostream>

using namespace std ;

int main()
{
    int k,n,w ;
    cin >> k >> n >> w ;
    int sum = 0 ;

    for(int i = 1 ; i<= w ; i++)
    {
        sum += k*i ;
    }

    int rem = sum - n ;

    if (rem <= 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << rem << endl;
    }
}
