#include<iostream>
using namespace std;

int twinprime(int n)
{
    int i = 2;
    for (i = 2; i <= n / 2; i++)
    { 
        if (n % i == 0)
            return 0;
    }
    if (i > n / 2)
        return 1;
}
int main() {
    int i, num, count = 0, a;
 
    cout << " Enter the first number: ";
    cin >> i;
    cout << " Enter the last number: ";
    cin >> num;
    for (i; i <= num; i++)
    {
        if (twinprime(i) && twinprime(i + 2))
        {
            cout << " \n The twin prime number is: " << i << " " << i + 2;
            count++; 
        }
    }
    cout << " \n \n Total number of twin prime pairs: " << count;
    return 0;
}