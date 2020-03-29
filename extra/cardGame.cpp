#include <iostream>
using namespace std;

int main()
{
    int p1;
    cin >> p1;
    int vp1[p1];
    for (int i = 0; i < p1; i++)
        cin >> vp1[i];
    int p2, maxp2 = 0;
    cin >> p2;
    int vp2[p2];
    for (int j = 0; j < p2; j++)
    {
        cin >> vp2[j];
        if (vp2[j] > maxp2)
            maxp2 = vp2[j];
    }
    long long count = 0;
    for (int k = 0; k < p1; k++)
        if (vp1[k] <= maxp2)
            count += maxp2 + 1 - vp1[k];
    cout << count;
    return 0;
}