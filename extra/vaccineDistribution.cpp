#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long n, d;
        cin >> n >> d;
        int ages[n];
        int atRisk = 0, notAtRisk = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ages[i];
            if (ages[i] <= 9 || ages[i] >= 80)
                atRisk++;
            else
                notAtRisk++;
        }

        int atRiskTime = atRisk % d == 0 ? atRisk / d : atRisk / d + 1;
        int notAtRiskTime = notAtRisk % d == 0 ? notAtRisk / d : notAtRisk / d + 1;

        int result = atRiskTime + notAtRiskTime;

        cout << result << endl;
    }
}