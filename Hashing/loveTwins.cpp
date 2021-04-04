// https://practice.geeksforgeeks.org/problems/love-for-the-twins/0
#include<iostream>
using namespace std;
int main()
 {
	//code
	int testCases;
	cin>>testCases;
	while(testCases--) {
	    int size;
	    cin>>size;
	    int arr[size];
	    for(int i=0;i<size;i++) {
	        cin>>arr[i];
	    }
	    int arr2[size] = {0};
	    int count =0;
	    for(int j=0;j<size;j++) {
			  
	        if(arr2[j] == 1) {
                count++;
                arr2[j] = 0;
            }
	    }
        cout << count*2<<endl;
	}
	return 0;
}