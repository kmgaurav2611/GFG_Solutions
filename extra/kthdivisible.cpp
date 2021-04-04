#include<iostream>
#include <vector> 
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--) {
        int num1, num2;
        cin>>num1>>num2;
        int count =0;
        for(int i =1; ;i++)
        {
            cout<<i;
            if(i%num1 == 0  && count == num2)
            {
                cout<<i;
                break;
            }
            else
            count++;
        }
    }
	return 0;
}