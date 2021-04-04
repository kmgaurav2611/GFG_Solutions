#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long int low, high;
        cin >> low >> high;
        // long long int diff = high-low;
        long long int result  = 2*high - 2*low + 1;
        cout<<result<<endl;
    }
}