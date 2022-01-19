#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int S, x = 0, k = 0;
	cout << "Enter Sum:";
	cin >> S;
	while(x < (S / 3))
	{
		int y = 0;
		while(y < (S / 5))
		{
			if ((3 * x + 5 * y) == S) {
				k++;
			}
			y++;
		}
	 x++;
	}
	cout << "Result=" << k ;
	return 0;
}