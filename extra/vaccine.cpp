#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int fun (int a, int b){
    if(a>5 || b>5) {
        return fun(0,0)+ fun(0,1) + fun(a-2, b-2);
    }
    else{
        a+=2;
        b-=2;
    }
    return a-b;
}
int main()
{
    cout<<fun(9,9);
}