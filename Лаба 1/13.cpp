#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int q, n, m, b, a, z, v = 0, l, p;
	cout << "Enter total number of arshins : ";
	cin >> q;
	cout << "Enter total amount of money: ";
	cin >> b;
	cout << "The cost of blue cloth per arshin : ";
	cin >> n;
	cout << "The cost of black cloth per arshin : ";
	cin >> m;
	a = v;
	l = m;
	p = n;
	b = (q - v) * p + a * l;
	b = q * n - a * (n - m);
	a = (2 * n - b) / (n - m);
	z = q - a;
	cout << "\n" << "Amount of black: " << a;
	cout << "\n" << "Amount of blue: " << b;
	return 0;
}