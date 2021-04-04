#include <iostream>
#include <math.h>
using namespace std; 

int main()
{
	int test;
    cin>>test;
    while(test--){
        int n, x;
        cin>>n>>x;
        if(n==1 || n==2){
            cout<<1<<endl;
        }
        else{
            int res = ((n-2)%x)==0 ? ((n-2)/x ) + 1: ((n-2)/x ) + 2 ;
            cout<<res<<endl;
        }
    }
}