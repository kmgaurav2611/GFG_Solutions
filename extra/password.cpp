#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isValid(string password)
{

    // For checking if password length is 10+
    if (!(password.length() >= 10))
        return false;

    if (true)
    {
        int count = 0;

        // Check digits from 0 to 9
        for (int i = 0; i <= 9; i++)
        {
            // To convert int to string
            string str1 = to_string(i);

            // size_t found2 = password.find(str1);
            // if (found2 != std::string::npos)
            // {
            //     if (found2 != 0 && found2 != password.length() - 1)
            //         count = 1;
            // }
            for (int i = 0; i < password.length(); i++) {
                if (password.substr(i,1) == str1) {
                    // cout << i << " ";
                    if (i != 0 && i != password.length() - 1)
                    count = 1;
                }
            }

        }
        if (count == 0)
            return false;
    }

    // For special characters

    size_t foundAt = password.find("@");
    size_t foundHash = password.find("#");
    size_t foundPercent = password.find("%");
    size_t foundTop = password.find("&");
    size_t foundQues = password.find("?");
    if (foundAt != std::string::npos)
    {
        if (foundAt == 0 || foundAt == password.length() - 1)
            return false;
    }
    if (foundHash != std::string::npos)
    {
        if (foundHash == 0 || foundHash == password.length() - 1)
            return false;
    }
    if (foundPercent != std::string::npos)
    {
        if (foundPercent == 0 || foundPercent == password.length() - 1)
            return false;
    }
    if (foundTop != std::string::npos)
    {
        if (foundTop == 0 || foundTop == password.length() - 1)
            return false;
    }
    if (foundQues != std::string::npos)
    {
        if (foundQues == 0 || foundQues == password.length() - 1)
            return false;
    }

    if (true)
    {
        int count = 0;

        // Checking capital letters
        for (int i = 65; i <= 90; i++)
        {

            // Type casting
            char c = (char)i;
            string str1(1, c);

            size_t found = password.find(str1);
            if (found != std::string::npos)
            {
                if (found != 0 && found != password.length() - 1)
                    count = 1;
            }
        }
        if (count == 0)
            return false;
    }

    if (true)
    {
        int count = 0;

        // Checking small letters
        for (int i = 97; i <= 122; i++)
        {
            // Type casting
            char c = (char)i;
            string str1(1, c);

            if (password.find(str1) !=
                std::string::npos)
                count = 1;
        }
        if (count == 0)
            return false;
    }

    // If all conditions fails
    return true;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string str;
        cin >> str;
        if (isValid(str))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}