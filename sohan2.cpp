#include <iostream>
using namespace std ;
int main() {

    int arr[5] = {-2,-6,-7,-9,-3} ;
    int maxi = INT_MIN ;

    for(int i = 0 ; i<5 ; i++)
    {
        if(arr[i] > maxi)
        {
            maxi  = arr[i] ;
        }
    }
    cout << maxi << endl ;


    return 0;
}
