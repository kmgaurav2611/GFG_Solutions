#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int maxEvents(vector<vector<int>> events)
{
    sort(events.begin(), events.end());
    priority_queue<int, vector<int>, greater<int>> pq;
    int res = 0;
    for (int i = 0, N = events.size(), d = 0; d <= 100000; ++d)
    {
        while (i < N && events[i][0] == d)
            pq.push(events[i++][1]);
        while (!pq.empty() && pq.top() < d)
            pq.pop();
        if (!pq.empty())
        {
            pq.pop();
            ++res;
        }
    }
    return res;1123932126121995
}
int main()
{
     vector<vector<int>> vect
    {
        {1,10000},
        {4,4},
        {4,4},
        {4,10}
    };
    int result  = maxEvents(vect);
    cout<<result<<endl;
     
}
