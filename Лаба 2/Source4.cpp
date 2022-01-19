#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x1, y1, x2, y2, x3, y3;
	cout << "Enter coordinates of circle:";
	cin >> x1 >> y1;
	cout << "Enter coordinates of point that circle crosses over:";
	cin >> x2 >> y2;
	cout << "Enter coordinates of point:";
	cin >> x3 >> y3;
	if (pow(x1 - x2, 2) + pow((y1 - y2), 2) == pow((x1 - x3), 2) + pow((y1 - y3), 2))
	{
		cout << "The point lies on the circul";
	}
	else {
		cout << "The point isn't lies on the circul";
	}

	return 0;
}