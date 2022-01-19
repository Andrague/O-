#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, i = 1, S = 0;
	cout << "Enter n: ";
	cin >> n;
	while (i <= n) {
		S = S + i + i;
		i = i + 1;
	}
	cout << "Sum= " << S;
	return 0;
}