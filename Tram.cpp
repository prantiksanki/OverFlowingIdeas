#include<algorithm>
#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    int maxi = INT_MIN ;
    int remPas = 0 ;
    while(n--)
    {
        int a , b  ;
        cin >> a >> b ;
        remPas = remPas + b - a  ;
        maxi = max(maxi , remPas) ;
    }

    cout << maxi << endl ;
}
