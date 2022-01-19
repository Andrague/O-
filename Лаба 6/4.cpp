#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i, j, k, m, n, min, max, p, r, l, t;
	cout << "Enter number of strings: ";
	cin >> n;
	cout << "Enter number of rowws: ";
	cin >> m;
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++)
		matrix[i] = new int[m];
	cout << "matrix: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = 9 - rand() % 19;
			cout << setw(3) << matrix[i][j];
		}
		cout << endl;
	}
	for (i = 0; i < n; i++)
	{
		min = matrix[i][0];
		for (j = 0; j < m; j++)
		{
			if (min >= matrix[i][j])
			{
				min = matrix[i][j];
				p = i;
				r = j;
			}
		}
		j = r;
		max = matrix[0][j];
		for (k = 0; k < n; k++)
		{
			if (max <= matrix[k][j])
			{
				max = matrix[i][j];
				l = k;
				t = j;
			}
		}
		if (min == max) {
			if (p == l && r == t)
			{
				cout << "Saddle point(" << p + 1 << "," << r + 1 << ") : " << max << endl;
			}
		}
	}
	return 0;
}