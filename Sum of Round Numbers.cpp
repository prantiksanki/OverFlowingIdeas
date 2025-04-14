#include<iostream>
#include<vector>
#include<algorithm>
#include <cmath>

using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        vector<int>store ;
        while(n != 0)
        {
            int rem = n % 10 ;
            store.push_back(rem) ;
            n = n/10  ;
        }

        int s = store.size() ;
        vector<int>ansStore ;
        for(int i = 0 ; i< s ; i++)
        {
            int ans = store[i] * pow(10,i) ;
            if(ans != 0)
            {
                ansStore.push_back(ans) ;
            }
            else
            {
                continue ;
            }
        }
        cout << ansStore.size() << endl ;
        for(int i = 0 ; i < ansStore.size() ; i++)
        {
            cout << ansStore[i] << " " ;
        }
    }
}
