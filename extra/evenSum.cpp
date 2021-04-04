#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size;
        cin >> size;

        int arr[size];
        int count =0;
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
            if(arr[i]%2 != 0)
            count++;
        }
        if(count%2 == 0)
        cout<<"1"<<"\n";
        else
        cout<<"2"<<"\n";
    }
}