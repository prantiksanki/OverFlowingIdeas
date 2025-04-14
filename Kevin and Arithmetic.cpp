#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> store(n);
        for (int i = 0; i < n; i++) {
            cin >> store[i];
        }

        vector<int>odd ;
        vector<int>even ;

        for(int i = 0 ; i< n ; i++)
        {
            if(store[i] % 2 == 0)
            {
                even.push_back(store[i]) ;
            }
            else{
                odd.push_back(store[i]) ;
            }
        }

        vector<int>temp ;
        for(int i = 0 ; i<even.size() ; i++)
        {
            temp.push_back(even[i]) ;
        }

       for(int i = 0 ; i<odd.size() ; i++)
        {
            temp.push_back(odd[i]) ;
        }


        long long s = 0;
        long long ptr = 0;

        for (int i = 0; i < n; i++) {
            s += temp[i];

            if (s % 2 == 0) {
                ptr++;
            }

            while(s%2 == 0)
            {
                s = s/2 ;
            }
        }

        cout << ptr << endl;
    }

    return 0;
}
