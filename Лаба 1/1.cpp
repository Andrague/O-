#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Input a and b: ";
	cin >> a >> b;
	b ^= a ^= b ^= a %= b;
	cout <<a <<" " << b << endl;
	return 0;
}