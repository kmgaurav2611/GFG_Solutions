#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num % 10 == 0)
        cout << "10" << '\n';
    else if (num % 9 == 0)
        cout << "9" << '\n';
    else if (num % 8 == 0)
        cout << "8" << '\n';
    else if (num % 7 == 0)
        cout << "7" << '\n';
    else if (num % 6 == 0)
        cout << "6" << '\n';
    else if (num % 5 == 0)
        cout << "5" << '\n';
    else if (num % 4 == 0)
        cout << "4" << '\n';
    else if (num % 3 == 0)
        cout << "3" << '\n';
    else if (num % 2 == 0)
        cout << "2" << '\n';
    else
        cout << "1" << '\n';
}