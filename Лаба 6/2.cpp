#include<iostream>
#include <iomanip>
using namespace std;
int main() {
    int n, m, z = 0, N = 2;
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
            MAS[i][j] = 9 - rand() % 21;
            cout << setw(3) << MAS[i][j];
        }
        cout << endl;
    }
    int j = 0, i = 0;
    while(i<n){
    while (j < m) {
        if (MAS[i][j] == 0)
            z++;
        j++;
    }
    i++;
    }
if (z == 0) {
    cout << "String is absent";
}
else {
    if (z > m) {
        cout << "row is absent";
    }
    else {
        j = 0;
        while (j < m) {
            i = 0;
            while (i < n) {
                MAS[i][j] *= N;
                i++;
            }
            cout << MAS[i][j];
            j++;
        }
    }
}
return 0;
}