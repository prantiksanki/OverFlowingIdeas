#include<iostream>
#include<vector>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    int count =0  ;
    while(n--)
    {
        int it ;
        cin >> it ;
        if(it == 1)
        {
            count++ ;
        }
    }

    if(count != 0)
    {
        cout << "HARD" << endl ;
    }
    else
    {
        cout << "EASY" << endl ;
    }

}
