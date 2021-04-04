#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        
        string str;
        cin >> str;
        int arr[26] = {0};
        for(int i =0;i<str.length();i++)
        {
            arr[str[i]-'a']++;
        }
        int evenCount = 0;
        for(int j=0;j<26;j++)
        {
            if(arr[j]%2==0)
            evenCount++;
            cout<<arr[j];
        }
        
       
    }
}