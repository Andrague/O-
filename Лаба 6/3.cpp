#include<iostream>
#include <iomanip>
using namespace std;
int main() {
    int n, m, r = 0, k = 0,i=0,j=0,p;
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
            MAS[i][j] = 9 - rand() % 19;
            cout << setw(3) << MAS[i][j];
        }
        cout << endl;
    }
    j = 0;
    while (j < m) {
         i = 0, p = 0;
        while (i < n) {
            if (MAS[i][j] < p) {
                r ==j;
                p++;
                i ==n;
            }
            i++;
        }
        j++;
    }
    if (p== 0) {
        cout << "row is absent";
    }
    else {
        if (r ==0) {
            cout << "row is first";
        }
        else {
            k ==r - 1;
            while (j < m) {
                int  i = 0;

                while (i < n) {
                    MAS[i][j] /= 2;
                    i++;
                }
                j++;
                cout <<"Answer: " << MAS[i][j];
            }
           
        }
    }
    return 0;
}

