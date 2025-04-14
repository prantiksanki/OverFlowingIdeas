#include<iostream>
using namespace std ;


void disp(string str, int cnt)
{
    cnt++;
    if(cnt == 6)
    {
        return ;
    }
    cout << str << endl;
    disp("Prantik", cnt) ;
}

int main()
{
    int cnt = 0 ;
    disp("Prantik", cnt);
}
