#include<iostream>
#include <iomanip>
using namespace std;
int main() {
    int n, m, S = 0, N = 1;
    cout << "Enter number of strings: ";
    cin >> n;
    cout << "Enter number of rowws: ";
    cin >> m;
    int** MAS = new int* [n];
    for (int i = 0; i < n; i++)
        MAS[i] = new int[m];
    cout << "matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            MAS[i][j] = 10 - rand() % 20;
            cout << setw(3) << MAS[i][j];
        }
        cout << endl;
    }
    int i = 0;
    cout << "Sum is ";
    while (i < n) {
        int j = 0;
        while (j < m) {
            S = S + MAS[i][j];
            j++;
        }
        i++;
        cout << setw(3) << S;
    }
  
   int j = 0;
 
   cout << endl << "Product of numbers: ";
    while (j<m)
    {
        i = 0;
        while (i < n) {
            N = N * MAS[i][j];
            i++;
        }
        j++;
        cout << N << endl;
    }
   
    return 0;
}