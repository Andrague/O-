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
	if (a < 0) {
		cout << "Negative number is exist";
	}
	else {
		if (b < 0) {
			cout << "Negative number is exist";
		}
		else {
			if (c < 0) {
				cout << "Negative number is exist";
			}
			else {
				cout << "Negative number is not exist";
			}
		}
	}

	return 0;
}