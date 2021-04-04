#include <iostream>
#include <math.h>
using namespace std;
int countOdd(int L, int R){  
    int N = (R - L) / 2; 
    // if either R or L is odd  
    if (R % 2 != 0 || L % 2 != 0)  
        N += 1; 
    return N; 
} 

int main()
{
	int low, high, k;
    cin>>low>>high;
    cin>>k;
        int odds = countOdd(low, high); 
        int evens = (high - low + 1) - odds; 
    
    // int x = odds, y=evens, n =k;
    //     int result =  (pow(x+y, n) - pow(x-y, n))/2;
        cout<<evens<<odds;
        //  int result = pow(evens, k)+ pow(evens, k%2) + pow(odds, k/2) + pow(odds, k%2);
        // cout<<result;  ///   (x+y)^n - (x-y)^n)/2
}