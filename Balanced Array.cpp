#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        if((n / 2) % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        vector<int> arr;
        int temp = n / 2;
        int even = 2, odd = 1, evenSum = 0, oddSum = 0;

        for(int i = 0; i < temp; i++)
        {
            arr.push_back(even);
            evenSum += even;
            even += 2;
        }

        for(int i = 0; i < temp - 1; i++)
        {
            arr.push_back(odd);
            oddSum += odd;
            odd += 2;
        }

        arr.push_back(evenSum - oddSum); // last odd number

        cout << "YES" << endl;
        for(int num : arr)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
