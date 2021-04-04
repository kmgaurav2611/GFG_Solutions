#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// vector<int> primeInRange( int R)
// {
//     int i, j, flag;
//     vector<int> res;
//     // Traverse each number in the
//     // interval with the help of for loop
//     for (i = 1; i <= R; i++) {

//         // Skip 0 and 1 as they are
//         // niether prime nor composite
//         if (i == 1 || i == 0)
//             continue;

//         // flag variable to tell
//         // if i is prime or not
//         flag = 1;

//         // Iterate to check if i is prime
//         // or not
//         for (j = 2; j <= sqrt(i); ++j) {
//             if (i % j == 0) {
//                 flag = 0;
//                 break;
//             }
//         }

//         // flag = 1 means i is prime
//         // and flag = 0 means i is not prime
//         if (flag == 1)
//             res.push_back(i);
//     }
//     return res;
// }
// bool hasArrayTwoCandidates(vector<int> A, int arr_size,int sum)
// {
//     int l, r;

//     /* Now look for the two candidates in
//        the sorted array*/
//     l = 0;
//     r = arr_size - 1;
//     while (l < r) {
//         if (A[l] + A[r] == sum)
//             return 1;
//         else if (A[l] + A[r] < sum)
//             l++;
//         else // A[i] + A[j] > sum
//             r--;
//     }
//     return 0;
// }

// Function to check whether a number
// is prime or not
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

// Function to check if a prime number
// can be expressed as sum of
// two Prime Numbers
bool isPossible(int N)
{
    // if the number is prime,
    // and number-2 is also prime
    if (isPrime(N) && isPrime(N - 2))
        return true;
    else
        return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int result = 0;
        if (n <= 4)
            cout << 0 << "\n";
        for (int i = 5; i <= n; i++)
        {
            if (isPossible(i))
                result++;
        }
        // vector<int> prime = primeInRange(n);
        // int result = 0;
        // for(auto a:prime){
        //     // cout<<a<<endl;
        //     if(hasArrayTwoCandidates(prime, prime.size(),a))
        //     result++;
        // }
        if (n > 4)
            cout << result << "\n";
    }
}