#include<iostream>
#include <iomanip>
using namespace std;
int main() {
    int n, m, a = 0, b = 0, i = 0, j = 0, c = 0, z=0,S=0;
    cout << "Enter a parameters of square matrix: ";
    cin >> n;
    
    int** MAS = new int* [n];
    for (int i = 0; i < n; i++)
        MAS[i] = new int[n];
    cout << "matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            MAS[i][j] = 9 - rand() % 19;
            cout << setw(3) << MAS[i][j];
        }
        cout << endl;
    }
    i = 0;
    while(i<n){
         j = 0;
         while (j < n) {
             z = 0;
             if (MAS[i][0] < 0) {
                 if (j > i) {
                     a += MAS[i][j];
                 }

                 if (i > j) {
                     b += MAS[i][j];
                 }
                 else {
                     if (i == j) {
                         c += MAS[i][j];
                     }
                 }
                 z++;
             }
             j++;
         }
         i++;
    }
    if (z==0) {
        cout << "Elements are absent";
    }
    else {
        S = a + b + c;
        cout << "Sum of elements is" << S;
    }
    return 0;
}
