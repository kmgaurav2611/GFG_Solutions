#include<iostream>
#include <vector> 
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--) {
        int num;
        cin>>num;
        int summand = 0;
        int count =1;
        int count2 = 0;

        vector<int> g1;
        while(num>0){
            if(num%10 != 0)
            {
                summand = num% 10;
                g1.push_back(summand*count); 
                // cout<<summand*count;
                count2++;
            }
            num = num/10;
            count = count * 10;
        }
        cout<<count2<<endl;
        for (auto it = g1.begin(); it != g1.end(); it++) 
        cout << *it << " "; 
    }
	return 0;
}