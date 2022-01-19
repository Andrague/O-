#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, i = 0, k = 0, j = 0;
	cout << "Enter n:";
	cin >> n;
	for (i < pow(n, 1 / 3); i++;)
	{
		int j = 0;
		for (j <pow(n, 1 / 3);j++;)
		{
			if (pow(i, 3) + pow(j, 3) ==n) {
				k++;
			}
		}
	}
	if (k==0) {
		cout << "Impossible";
	}
	else {
		cout << k;
	}
	return 0;
}