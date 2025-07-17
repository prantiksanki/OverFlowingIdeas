#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int itr ; 
    cin >> itr ; 

    while(itr--)
    {
        int n,k ; 
        cin >> n >> k ; 

        vector<int> vis(n);
        for(int i = 0; i < n; ++i)
            cin >> vis[i];

        int cnt = 0;
        int i = 0;
        while(i <= n - k)
        {
            bool can_hike = true;
            for(int j = 0; j < k; ++j)
            {
                if(vis[i + j] != 0)
                {
                    can_hike = false;
                    break;
                }
            }
            if(can_hike)
            {
                cnt++;
                i += k + 1; // skip k days of hike and 1 rest day
            }
            else
            {
                i++;
            }
        }
        cout << cnt << endl;
    }
}