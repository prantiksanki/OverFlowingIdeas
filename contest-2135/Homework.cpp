#include<iostream>
#include<string>
using namespace std ; 

int main()
{
    int t ; 
    cin >> t  ; 
    while(t--)
    {
        int n ; 
        cin >> n ; 
        string a,b,c ; 

        cin >> a ; 

        int m ; 
        cin >>  m ;

        cin >> b >> c ; 

        for(int i = 0; i < m ; i++)
        {
            if(c[i] == 'V')
            {
                a = b[i] + a ; 
            }
            else{
                a = a + b[i] ; 
            }
        }
        cout << a << endl;
    }
}