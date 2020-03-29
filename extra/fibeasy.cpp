#include <iostream>
using namespace std;
int fib(int n)
{
    int f[n + 2];
    int i;
    f[0] = 0;
    f[1] = 1;
    for (i = 2; i <= n; i++)
        f[i] = f[i - 1] + f[i - 2];
    return f[n];
}
int highestPowerof2(unsigned int n) 
{ 
    if (n < 1) 
        return 0; 
    int res = 1; 
    for (int i=0; i<8*sizeof(unsigned int); i++) 
    { 
        int curr = 1 << i; 
        if (curr > n) 
           break; 
        res = curr; 
    }
    return res; 
}
int main()
{
    int test;
    cin>>test;
    while(test--){
        int num;
        cin>>num;
        cout<<fib(highestPowerof2(num)-1)%10;
    }
    return 0;
}
