#include <iostream>
#include <string>
using namespace std;

int main()
{
     int test;
     cin >> test;

     while (test--)
     {
          string time;
          cin >> time;
          string meridian;
          cin >> meridian;
          int hour = stoi(time.substr(0, 2));
          int min = stoi(time.substr(3, 2));
          int avTime;
          if (meridian == "PM")
          {
               avTime = 100 * (stoi(time.substr(0, 2)) + 12) + stoi(time.substr(3, 2));
          }
          else
          {
               avTime = 100 * stoi(time.substr(0, 2)) + stoi(time.substr(3, 2));
          }

          cout << avTime << endl
               << meridian;
          //    int n;
          //    cin >> n;
          //   while(n--)
          //   {

          //   }
     }
}