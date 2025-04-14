
#include<iostream>
#include<string>
using namespace std  ;

int main()
{
    string str ;
    cin >> str ;
    string str1 = "";
    str1 = toupper(str[0]) ;
    for(int i = 1 ; i< str.length() ; i++)
    {
        str1 += str[i] ;
    }
    cout << str1 << endl ;
}
