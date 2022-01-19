#include <iostream>
using namespace std;

bool isPerfect(int n)
{
	int i = 0, sum = 0;

	while (i++ < n)
	{
		if (n % i == 0 && i < n)
		{
			sum += i;
		}
	}
	return sum == n;
}

int main()
{
	int first, second;
	cout << "Enter the first number of the range : " << endl; cin >> first;
	cout << "Enter the second number of the range : " << endl; cin >> second;

	cout << "Perfect numbers between " << first << " and " << second << " :" << endl;
	for (int i = first; i <= second; i++)
	{
		if (isPerfect(i))
		{
			cout << i << endl;
		}
	}

	return 0;
}