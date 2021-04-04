#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int curr=1;
    int result = 0;
   while(curr<n){
       int sum = a[curr-1];
       for(int j = curr; j <n;j ++){
           if((a[j]+sum) == 0) {
            //    cout<<a[j]<<curr<<endl;
               result++;
               break;
           }
           else{
               sum += a[j]; 
            //    break;
           }
       }
       curr++;
   }
   cout<<result<<endl;
    return 0;
}