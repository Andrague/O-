#include<iostream>
using namespace std;
int main()
{
	int n, S = 0, a = 1, i = 1;
	cout << "Enter a count of numbers:";
	cin >> n;
	while (i < n) {
		S = S + a;
		a = a + 1;
		i = i + 1;
	
	}
	cout << "Sum=" << S;
		return 0;
}