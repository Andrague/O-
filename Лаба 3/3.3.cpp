#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int S = 0, a,n=10;
	cout << "Enter a:";
	cin >> a;
	while (a < 100) {
		S = S + a;
		a++;
	}
	cout << "Sum= " << S;
	return 0;
}