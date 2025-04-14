/*Luke Skywalker gave Chewbacca an integer number x.
Chewbacca isn't good at numbers but he loves inverting digits
 in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum
possible positive number by inverting some (possibly, zero) digits.
The decimal representation of the final number shouldn't start with a zero.
*/
/*
#include<iostream>
#include<vector>
#include<string>
using namespace std ;

int main()
{
    string n;
    cin >> n;
    vector<string>store ;
    for (int i = 0; i < n.length(); i++) {
        int digit = n[i] - '0';

         if (!(i == 0 && digit == 9))
        {
            n[i] = (9 - digit) + '0';
        }

    }

    cout << n << endl;
    return 0;
}


*/





/*

#include<iostream>
using namespace std;

long long Invert(long long x){
    long long temp = 0;
    long long num = 0;
    while(x){

        temp = x%10;
        if(temp>=5)
            num = num*10 + (9-temp);
        else
            num = num*10 + temp;

        x/=10;
        if(x==9){
            num = num*10 + x;
            break;
        }
    }
    return num;
}

int main(){

    long long x;
    cin>>x;
    cout<<Invert(x)<<endl;

}
*/



#include<iostream>
#include<string>
using namespace std;

string Invert(string x){
    string s = "";
    for(int i=0; i<x.length(); i++){
        if(x[i]>='5'){
            s.push_back('9' - x[i] + '0');
        }
        else
            s.push_back(x[i]);
    }
    if(s[0]=='0') s[0] = '9';

    return s;
}

int main(){

    string x ;
    cin>>x;
    cout<<Invert(x)<<endl;
}
