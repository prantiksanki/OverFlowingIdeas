#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string in;
        cin >> in;

        int start = -1, end = -1, ans = 0;

         for (int i = 0; i < in.length(); i++)
        {
            if (in[i] == '1')
            {
                if (start == -1) start = i;
                end = i;
            }
        }

         if (start != -1 && end != -1)
        {
            for (int i = start; i < end; i++)
            {
                if (in[i] == '0') ans++;
            }
        }

        cout << ans << endl;
    }
}
