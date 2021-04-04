#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string input;
        cin >> input;
        char char_array[input.length() + 1];
        strcpy(char_array, input.c_str());
        char *pch;
        pch = strtok(char_array, "0");
        int count = 0;
        while (pch != NULL)
        {
            count++;
            pch = strtok(NULL, "0");
        }
        cout << count << "\n";
    }
}