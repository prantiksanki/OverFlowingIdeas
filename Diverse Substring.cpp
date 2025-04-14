#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
using namespace std;
int main()
{

    ll n;
    string s,t;
    cin>>n>>s;

    bool flag = false;
    for(ll i=0; i<n-1; i++){
        if(s[i] != s[i+1]){
            flag = true;
            t += s[i];
            t += s[i+1];
            break;
        }
        else{
            flag = false;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
        cout<<t<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
