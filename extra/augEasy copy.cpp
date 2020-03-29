#include <iostream>
#include <string>
using namespace std;

int main() {
    int size;
    cin>>size;
    char currChar,prevChar ;
    bool flag = true;
    string res;
    for(int i=1;i<=size;i++) {
        cin>>currChar;
        if(currChar=='H'&& prevChar=='H'){
            res.append("H");
            //cout<<'H';
            flag=false;
        }
        else if (currChar=='.'){
            res.append("B");
          //  cout<<'B';
        }
        else {
           // cout<<currChar;
           res+=currChar;
            prevChar=currChar;
        }
        cout<<flag<<res;
    }
}