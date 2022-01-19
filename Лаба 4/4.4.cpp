#include<iostream>
using namespace std;

int main() {
   
    int numb, i = 2;
    cout << "Enter a number:";
    cin >> numb;
    while (i * i <= numb)
    {
        if (numb % i == 0)
        {
            cout << i;
            numb = numb / i;
            cout << '*';
        }
        else if (i == 2) i = 3;
        else i = i + 2;
    }
    cout << numb;
    return 0;
}