#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long int n , k ;
    cin >> n >> k ;
    if( n == 1 ){
        cout << 0 << endl ;
    }
    else if ( n == 2){
        cout << k << endl ;
    }
    else {
        cout << 2*k << endl ;
    }
}

int main()
{

    int testcase;
    cin >> testcase;
    for (int t = 1; t <= testcase; t++){
        solve();
    }

    return 0;
}
