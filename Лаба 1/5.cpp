#include<iostream>

#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
    float x1, y1, x2, y2, z, S;
   cout<<"x1: ";
   cin >> x1;
   cout<<"y1:";
    cin>>y1;
   cout<<"x2:";
    cin>>x2;
   cout<<"y2:";
    cin>>y2;
    z= (pow((x1 + x2), 2)) + (pow((y1 + y2), 2));
    S=z/2;
    cout << "S: " << S;
    return 0;
}