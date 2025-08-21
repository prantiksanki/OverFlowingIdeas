#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Function to compute the number of digits up to d-digit numbers
ll get_total_digits(int d) {
    if (d == 0) return 0;
    ll total = 0;
    for (int i = 1; i <= d; i++) {
        total += 9LL * pow(10LL, i - 1) * i;
    }
    return total;
}

// Function to compute the sum of digits for numbers from 10^(d-1) to n (inclusive)
ll sum_digits_in_range(ll start, ll end, int d) {
    ll total_sum = 0;
    for (ll num = start; num <= end; num++) {
        ll temp = num;
        while (temp > 0) {
            total_sum += temp % 10;
            temp /= 10;
        }
    }
    return total_sum;
}

// Function to compute the sum of digits for the first k digits
ll solve(ll k) {
    if (k == 0) return 0;

    // Find the segment d where the k-th digit lies
    int d = 0;
    ll total_digits = 0;
    while (total_digits < k) {
        d++;
        total_digits += 9LL * pow(10LL, d - 1) * d;
    }

    // Compute digits in previous segments (1 to d-1)
    ll prev_digits = total_digits - 9LL * pow(10LL, d - 1) * d;
    ll rem_digits = k - prev_digits; // Digits needed from d-digit segment

    // Sum of digits in complete segments (1 to d-1)
    ll total_sum = 0;
    for (int i = 1; i < d; i++) {
        ll numbers = 9LL * pow(10LL, i - 1);
        total_sum += numbers * i * 45LL / 10; // Sum of digits 0-9 is 45
    }

    // Handle the d-digit segment
    ll numbers = 9LL * pow(10LL, d - 1); // Number of d-digit numbers
    ll complete_numbers = rem_digits / d; // Complete d-digit numbers
    ll extra_digits = rem_digits % d; // Remaining digits in the last number

    // Sum of digits for complete d-digit numbers
    if (complete_numbers > 0) {
        ll start = pow(10LL, d - 1);
        ll end = start + complete_numbers - 1;
        total_sum += sum_digits_in_range(start, end, d);
    }

    // Sum of digits for the remaining digits in the last number
    if (extra_digits > 0) {
        ll last_num = pow(10LL, d - 1) + complete_numbers;
        ll temp = last_num;
        vector<int> digits;
        while (temp > 0) {
            digits.push_back(temp % 10);
            temp /= 10;
        }
        reverse(digits.begin(), digits.end());
        for (int i = 0; i < extra_digits; i++) {
            total_sum += digits[i];
        }
    }

    return total_sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll k;
        cin >> k;
        cout << solve(k) << '\n';
    }

    return 0;
}