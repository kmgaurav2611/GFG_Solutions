#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];

        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            s.insert(arr[i]);
        }
        int i = 0;
        int sum = 0;
        for (auto it = s.rbegin(); it != s.rend() && i < k; ++it)
        {
            sum+=*it;
            i++;
        }
        cout<<sum<<endl;
    }
}