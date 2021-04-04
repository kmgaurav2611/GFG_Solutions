#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long n;
        string s1, s2;
        cin >> n >> s1 >> s2;
        long long temp1 = 0;
        long long temp2 = 0;
        for (char ch : s1)
        {
            temp1 += ch;
        }
        for (char ch2 : s2)
        {
            temp2 += ch2;
        }

        if (temp1 == temp2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}