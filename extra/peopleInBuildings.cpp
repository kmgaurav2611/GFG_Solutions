#include <iostream>
using namespace std;

int main()
{
    int citizens;
    int maxCit;
    cin >> citizens >> maxCit;
    int pos[citizens][2];

    for (int i = 0; i < citizens; i++)
        cin >> pos[i][0] >> pos[i][1];

    int buildings = citizens / maxCit;
    int count = 1;
    cout<<buildings<<endl;
    for (int j = 1; j <= buildings; j++)
    {
        int cit;
        if (buildings == j)
        {
           // cout<<"if";
            cit = (citizens % maxCit) + maxCit;
            cout << cit << endl;
            for (int i = 1; i <= cit; i++)
            {
               cout << count << " ";
                ++count;
            }
            cout<<endl;
        }
        else
        {
           // cout<<"else";
           cout << maxCit << endl;
            for (int i = 1; i <= maxCit; i++)
            {
                cout << count << " ";
                ++count;
            }
            cout<<endl;
        }
    }
}