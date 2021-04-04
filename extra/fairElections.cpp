#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int alen, blen, atotal = 0, btotal = 0;
        cin >> alen >> blen;
        int arra[alen], arrb[blen];

        for (int i = 0; i < alen; i++)
        {
            cin >> arra[i];
            atotal += arra[i];
        }
        for (int j = 0; j < blen; j++)
        {
            cin >> arrb[j];
            btotal += arrb[j];
        }
        sort(arra, arra + alen);
        sort(arrb, arrb + blen, greater<int>());
        int swap = 0;
        for (int k = 0; k < alen && k < blen; k++)
        {
            if (atotal <= btotal)
            {
                atotal = atotal + arrb[k] - arra[k];
                btotal = btotal + arra[k] - arrb[k];
                int temp = arra[k];
                arra[k] = arrb[k];
                arrb[k] = temp;
                swap++;
            }
        }
        if (atotal <= btotal)
            cout << "-1" << endl;
        else
            cout << swap << endl;
    }
}