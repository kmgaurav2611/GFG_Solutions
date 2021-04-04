#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long a, b;
        cin >> a >> b;

        long aEven = a / 2;
        long aOdd = (a % 2 == 0) ? a / 2 : a / 2 + 1;

        long bEven = b / 2;
        long bOdd = (b % 2 == 0) ? b / 2 : b / 2 + 1;

        long result = aEven * bEven + aOdd * bOdd;
        cout << result << endl;
    }
}