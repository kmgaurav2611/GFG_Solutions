#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a,b,c;
        cin >> a >> b >> c;

        if(((a+b)==c)||((a+c)==b)||((c+b)==a))
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
        
       
    }
}