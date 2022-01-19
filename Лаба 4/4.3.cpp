#include<iostream>
using namespace std;
int main()
{
    int n = 0, A, B, S1 = 0, S2 = 0, S = 0, k;
    int m = A;
    cout << "Enter first possition:";
    cin >> A;
    cout << "Enter end of possition:";
    cin >> B;
    for (n < B; n > A; n++) {
        int flag = 0;
        while (n% 2 == 0) {
            m++;
        }
        cout << "First prime is" << m;
    }
    int k = B;
    for (n < B; n > A; n--) {
       
        while (n % 2 == 0) {
            k++;
        }
        cout << "Last prime is:" << k;
    }
    if (A != k) {
        S = m +k;
    }
    else {
        S = m;
    }
    cout << "Sum of first and last digit: " <<S;
    return 0;
}