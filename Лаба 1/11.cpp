#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a, b, c, sa, sb;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Enter third number: ";
	cin >> c;
	sa = (a + b + c) / 3;
	cout << "\n" << "average: " << sa;
	sb = pow(a * b * c, 1 / 3);
	cout << "\n" << "geometric mean: " << sb;
	return 0;
}