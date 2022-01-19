#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int m, n, a = 1, S = 0;
	cout << "Enter m: "	;
	cin >> m;
	cout << "Enter n: ";
	cin >> n;
	while (a <= n) {
		S = S + a + m;
		a = a + 1;
	}
	cout << "Sum= " << S;
	return 0;
}