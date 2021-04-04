#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,h,x;
    cin>>n>>h>>x;
    int tzones[n];
    int maxRem = 0;
    for(int i=0;i<n;i++)
    {
        cin>>tzones[i];
        if(tzones[i]>maxRem)
        maxRem = tzones[i];
    }
    if(x+maxRem>=h)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
    
	return 0;	
}