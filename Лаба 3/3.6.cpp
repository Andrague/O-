#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x = 1, y = 0, k = 0;
	while (x < 3000 / 130) {
		while (y < 3000 / 160) {
			if (130 * x + 160 * y == 300) {
				cin >> x >> y;
				k = 1;
			}
			y = y + 1;
		}
		x = x + 1;
	}
	if (k = 0) {
		cout << "Impossible";
	}
	else {
		cout << "Possible";
	}
		return 0;
	}
