#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int result = abs(arr[0] - arr[1]) + abs(arr[1] - arr[n-1]) + abs(arr[2] - arr[n-1]);
        cout << result << "\n";
    }
}