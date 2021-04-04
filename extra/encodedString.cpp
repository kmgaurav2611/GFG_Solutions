#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        string s;
        cin >> n >> s;
        char c;
        for (int i = 0; i < n / 4; i++)
        {
            c = stoi(s.substr(i * 4, 4), 0, 2) + 'a';
            cout << c;
        }
        cout << endl;
    }
}