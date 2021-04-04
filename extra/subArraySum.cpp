#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        int size, sum;
        cin >> size >> sum;

        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        int currentSum = arr[0], start = 0;
        bool found = false;

        for (int j = 1; j <= size; j++)
        {
            while (currentSum > sum && start < j - 1)
            {
                currentSum -= arr[start];
                start++;
            }
            if (currentSum == sum)
            {
                cout << start + 1 << " " << j << endl;
                found = true;
                break;
            }

            if (j < size)
                currentSum += arr[j];
        }
        if (!found)
            cout << "-1" << endl;
    }
}