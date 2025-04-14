#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    // Find positions of max and min heights
    int max_index = 0, min_index = 0;
    int max_height = heights[0], min_height = heights[0];

    for (int i = 0; i < n; ++i) {
        if (heights[i] > max_height) {
            max_height = heights[i];
            max_index = i;
        }
        if (heights[i] <= min_height) {
            min_height = heights[i];
            min_index = i;
        }
    }

    // Calculate swaps needed
    int swaps = max_index + (n - 1 - min_index);

    // Adjust if max comes before min
    if (max_index > min_index) {
        --swaps;
    }

    cout << swaps << endl;

    return 0;
}
