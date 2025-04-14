#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main()
{
    int x1,x2,x3 ;
    cin >> x1 >> x2 >> x3 ;
    vector<int>store;
    store.push_back(x1);
    store.push_back(x2);
    store.push_back(x3);

    sort(store.begin() , store.end()) ;
    int dis1 = store[1] - store[0]  ;
    int dis2 = store[2] - store[1] ;

    cout << dis1+dis2 << endl  ;


}
