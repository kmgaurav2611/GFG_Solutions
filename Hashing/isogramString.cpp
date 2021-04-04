// https://practice.geeksforgeeks.org/problems/check-if-a-string-is-isogram-or-not/1
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

bool isIsogram(string s);

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        
        cout<<isIsogram(s)<<endl;
        
    }
	return 0;
}// } Driver Code Ends
//Complete this function
# define my_sizeof(type) ((char *)(&type+1)-(char*)(&type)) 
bool isIsogram(string s)
{
    //Your code here
    int arr[65];
    bool isogram = true;
  for(int i=0 ; i<s.length(); i++){
       if(arr[int(s[i])-97] == 1)
        {
            isogram = false;
            break;
        }
        else
        arr[int(s[i])-97] = 1;
  }
  int size = my_sizeof(arr)/my_sizeof(arr[0]);
  for(int j=0 ; j<size; j++){
      arr[j] = 0;
  }
    if(isogram)
    return true;
    else 
    return false;
}