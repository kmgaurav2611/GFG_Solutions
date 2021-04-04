#include <iostream>
#include <math.h>
#include <vector> 
#include <algorithm>
using namespace std;

vector<int> printDivisors(int n) 
{ 
	 vector<int> g1;
	for (int i=1; i<=sqrt(n); i++) 
	{ 
		if (n%i == 0) 
		{ 
			if (n/i == i) {
                g1.push_back(i);
            }
			else 
            {
                g1.push_back(i);
                g1.push_back(n/i);
            }
		} 
	} 
    return g1;
}

int main()
{
	int low, high;
    cin>>low>>high;
    
    vector<int> lowv = printDivisors(low);
    vector<int> highv = printDivisors(high);
   
    sort(lowv.begin(), lowv.end()); 
    sort(highv.begin(), highv.end()); 

    vector<int> v(lowv.size() + highv.size()); 
    vector<int>::iterator it, st; 
  
    it = set_intersection(lowv.begin(), 
                          lowv.end(), 
                          highv.begin(), 
                          highv.end(), 
                          v.begin()); 
  
    cout << "\nCommon elements:\n"; 
    sort(v.begin(), v.end(), greater<int>());
    // cout<<v.front();

        int count1=0;
        int count2=0;
     for (int i = lowv.size()-1; i>=0; i--){
         cout<<lowv[i];
        if(lowv[i] == v.front())
            break;
        else
        {
            count1++;
        }
        
     }
 cout<<"count1 is"<<count1;
     for (int i = highv.size()-1; i>=0; i--){
         cout<<highv[i];
        if(highv[i] == v.front())
            break;
        else
        {
            count2++;
        }
     }
    cout<<"count2 is"<<count2;

    count1>count2 ? cout<<count1 :cout<<count2;
}