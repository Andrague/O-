#include<iostream>
using namespace std;
int main()
{
    int num, i, count = 0;

    cout << " Enter Number : ";
    cin >> num;

    for (i = 2; i < num/2; i++)
    {
        if (num % i == 0)
        {
            count++;
            break;
        }
    }
    cout << endl;
    if (count == 0)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not a Prime Number";
    }
    cout << endl;
    return 0;
}