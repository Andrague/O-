#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a, b, x, n, m;
	cout << "Enter number of items trader: ";
	cin >> a >> b;
	cout << "Enter number of merchant coins: ";
	cin >> n >> m;
	x = (m - n) / (a - b);
	cout << "The value of a thing:  " << x;
	return 0;
}