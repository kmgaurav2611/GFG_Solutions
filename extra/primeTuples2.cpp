#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> primeInRange( int R)
{
    int i, j, flag;
    vector<int> res;
    // Traverse each number in the
    // interval with the help of for loop
    for (i = 1; i <= R; i++) {

        // Skip 0 and 1 as they are
        // niether prime nor composite
        if (i == 1 || i == 0)
            continue;

        // flag variable to tell
        // if i is prime or not
        flag = 1;

        // Iterate to check if i is prime
        // or not
        for (j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }

        // flag = 1 means i is prime
        // and flag = 0 means i is not prime
        if (flag == 1)
            res.push_back(i);
    }
    return res;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<int> prime = primeInRange(n);
        int result = 0;
        for(int i=1;i<prime.size();i++)
        {
            if(prime[i]-prime[i-1]==2)
            result++;
        }
        cout<<result<<endl;
    }
}