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
        int oddCount =0;
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
            if(arr[i]%2 != 0)
            oddCount++;
        }
        int evenCount = size - oddCount;
        if(evenCount>=oddCount)
        cout<<oddCount<<'\n';
        else
        cout<<evenCount<<"\n";
    }
}