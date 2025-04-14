#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    bool pos = true;

    vector<vector<char>> ans(n, vector<char>(m, '.'));

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
             for (int j = 0; j < m; j++)
            {
                ans[i][j] = '#';
            }
        }
       else
        {
             if (pos)
            {
                ans[i][m - 1] = '#';
            }
            else
            {
                ans[i][0] = '#';
            }
            pos = !pos;
        }
    }

     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}
