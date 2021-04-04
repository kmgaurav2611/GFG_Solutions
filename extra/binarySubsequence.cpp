#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int minDeletion(string str) 
{ 
     
    // Length of given string 
    int n = str.length(); 
 
    // Stores the first 
    // occurrence of '1' 
    int firstIdx1 = -1; 
 
    // Stores the last 
    // occurrence of '0' 
    int lastIdx0 = -1; 
 
    // Traverse the string to find 
    // the first occurrence of '1' 
    for(int i = 0; i < n; i++)
    { 
        if (str[i] == '1')
        { 
            firstIdx1 = i; 
            break; 
        } 
    } 
 
    // Traverse the string to find 
    // the last occurrence of '0' 
    for(int i = n - 1; i >= 0; i--) 
    { 
        if (str[i] == '0') 
        { 
            lastIdx0 = i; 
            break; 
        } 
    } 
 
    // Return 0 if the str have 
    // only one type of character 
    if (firstIdx1 == -1 || 
         lastIdx0 == -1) 
        return 0; 
 
    // Initialize count1 and count0 to 
    // count '1's before lastIdx0 
    // and '0's after firstIdx1 
    int count1 = 0, count0 = 0; 
 
    // Traverse the string to count0 
    for(int i = 0; i < lastIdx0; i++)
    { 
        if (str[i] == '1')
        { 
            count1++; 
        } 
    } 
 
    // Traverse the string to count1 
    for(int i = firstIdx1 + 1; i < n; i++) 
    { 
        if (str[i] == '1')
        { 
            count0++; 
        } 
    } 
 
    // Return the minimum of 
    // count0 and count1 
    return min(count0, count1); 
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size;
        cin >> size;

        string str;
        cin >> str;

        int p[str.length()] = {0};

        int i;
        for (i = 0; i < str.length(); i++)
        {
            p[i] = str[i] - '0';
            // cout << p[i] << endl;
        }

        cout<<minDeletion(str)<<'\n';
    }
}