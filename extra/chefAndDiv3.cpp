#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k, d;
        cin >> n >> k >> d;
        int arr[n];

        int sum = 0, div = 0, rem = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i] / k;
            rem += arr[i] % k;
            sum += rem / k;
            rem = rem % k;
        }
        if (sum <= d)
        {
            cout << sum << endl;
        }
        else
        {
            cout << d << endl;
        }
    }
}