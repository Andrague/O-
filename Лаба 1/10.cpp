#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4, l1, l2;
   cout<<"Enter the coordinates of the 1st point\n";
   cin >> x1 >> y1;
   cout<<"Enter the coordinates of the 2nd point\n";
  cin>>x2 >> y2;
   cout<<"Enter the coordinates of the 3rd point\n";
  cin>>x3 >> y3;
    if (((x2 - x1) * (x3 - x1) + (y2 - y1) * (y3 - y1)) == 0)
    {
       cout<<"Right angle at point 1\n";
        x4 = x3 - (x1 - x2);
        y4 = y3 + (y2 - y1);
        cout <<"\n" << "Point coordinates 4\n" << x4 << " " << y4;
    }
    else
        if (((x1 - x2) * (x3 - x2) + (y1 - y2) * (y3 - y2)) == 0)
        {
           cout<<"Right angle at point 2\n";
            x4 = x3 - (x2 - x1);
            y4 = y3 + (y1 - y2);
            cout << "\n" << "Point coordinates 4\n" << x4 <<" " << y4;
        }
        else
            if (((x2 - x3) * (x1 - x3) + (y2 - y3) * (y1 - y3)) == 0)
            {
               cout<<"Right angle at point 3\n";
                x4 = x2 - (x3 - x1);
                y4 = y2 + (y1 - y3);
               cout<<"\n"<<"Point coordinates 4\n"<< x4 << " " << y4;
            }
            else 
            {
                if (x1 == x2)
                    x4 = x3;
                else
                    if (x1 == x3)
                        x4 = x2;
                    else
                        x4 = x1;
                if (y1 == y2)
                    y4 = y3;
                else
                    if (y1 == y3)
                        y4 = y2;
                    else
                        y4 = y1;
                cout<<"\n" << "Point coordinates 4\n" << x4 << " " << y4;
            }
    return 0;
}