#include<iostream>
using namespace std;
int main()
{
	int a, l;
	cout << "Enter a number: ";
	cin >> a;
	l = a % 10;
	cout << "\n" << "last digit: " << l;
	return 0;
}