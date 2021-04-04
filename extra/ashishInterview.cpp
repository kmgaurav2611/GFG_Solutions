#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size, k;
        cin >> size >> k;

        int arr[size];
        int problemSolved = 0;
        bool tooSlow = false;
        int maxTime = 0;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];

            if (arr[i] != -1)
                problemSolved++;

            if (arr[i] > k)
                tooSlow = true;

            if (arr[i] > maxTime)
                maxTime = arr[i];
        }
        if (problemSolved < ceil(size / 2.0))
            cout << "Rejected" << '\n';
        else if (tooSlow)
            cout << "Too Slow" << '\n';
        else if ((maxTime <= 1) && (problemSolved == size))
            cout << "Bot" << '\n';
        else
            cout << "Accepted" << '\n';
    }
}