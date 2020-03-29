#include<iostream>
#include<string>

using namespace std;

int main() {
    int count;
    cin>>count;
    while(count--) {
        int players;
        cin>>players;
        int highest=0;
        int goals[players],fouls[players];
        for(int i=0;i<players;i++)
        cin>>goals[i];
        for(int i=0;i<players;i++)
        cin>>fouls[i];
        for (int i=0;i<players;i++) {
            if(highest<(goals[i]*20 - fouls[i]*10))
            highest=goals[i]*20 - fouls[i]*10;
        }
        cout<<highest<<endl;
    }
    return 0;
}