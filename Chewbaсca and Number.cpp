/*Luke Skywalker gave Chewbacca an integer number x.
Chewbacca isn't good at numbers but he loves inverting digits
 in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum
possible positive number by inverting some (possibly, zero) digits.
The decimal representation of the final number shouldn't start with a zero.
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std ;

int main()
{
    string n;
    cin >> n;

    for (int i = 0; i < n.length(); i++) {
        int digit = n[i] - '0';

         if (!(i == 0 && digit == 9))
        {
            n[i] = (9 - digit) + '0';
        }
    }

    cout << n << endl;
    return 0;
}
