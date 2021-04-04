#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int min1 = a[0];
    int min2 = a[1];

    int max1 = a[n-1];
    int max2 = a[n-2];

    int prod1 = min1* min2;
    int prod2 = max1*max2;
    prod1>prod2?cout<<prod1 : cout<<prod2;
	return 0;
}