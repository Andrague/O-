#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    float x1, y1;
   cout<<"x1:";
    cin>>x1;
   cout<<"y1:";
    cin>>y1;

    float x2, y2;
   cout<<"x2:";
    cin>>x2;
   cout<<"y2:";
    cin>>y2;
   cout<<"\n", pow((x1 - x2),2) * pow((y1 - y2),2);
    return 0;
}