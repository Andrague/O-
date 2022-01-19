#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter secondnumber: ";
	cin >> b;
	cout << "Enter third number: ";
	cin >> c;
	if (a > b) {
		if (a > c) {
			d = a;
			cout << "The huge number is:" << d;
		}
		else {
			d = c;
			cout << "The huge number is:" << d;
		}
	}
		if (b > c) {
			d = b;
			cout << "The huge number is:" << d;
		}
		
		return 0;
	}
