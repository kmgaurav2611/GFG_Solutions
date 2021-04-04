#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
struct marks
{
    int p;
    int c;
    int m;
};
bool cmp(struct marks m1, struct marks m2)
{
    if (m1.p < m2.p)
        return true;
    else if (m1.p > m2.p)
        return false;
    else if (m1.p == m2.p)
    {
        if (m1.c > m2.c)
            return true;
        else if (m1.c < m2.c)
            return false;

        else if (m1.c != m2.c)
        {
            if (m1.m < m2.m)
                return true;
            return false;
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<struct marks> v;
        for (int i = 0; i < n; i++)
        {
            int x, y, z;
            cin >> x >> y >> z;
            struct marks m1;
            m1.p = x;
            m1.c = y;
            m1.m = z;
            v.push_back(m1);
        }
        sort(v.begin(), v.end(), cmp);
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i].p <<" "<< v[i].c <<" "<< v[i].m <<"\n";
        }
    }
    return 0;
}