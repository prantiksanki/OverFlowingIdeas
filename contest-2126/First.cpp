#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int x ; 
    cin >> x ; 

    while(x--)
    {
        int n ; 
        cin >> n ; 

        string str = to_string(n);
        sort(str.begin(), str.end());

        char first = str[0];

        int ans = first - '0';

        cout << ans << endl;

    }
}