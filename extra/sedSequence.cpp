#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long n,k;

        cin>>n>>k;
        long long arr[n];
        long long sum=0;
        for(long long i =0; i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }

        long long result = sum%k==0 ? 0:1;
        cout<<result<<endl;
    }
}