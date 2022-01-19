#include<iostream>
using namespace std;
int main()
{
	int n=100, a = 0,k = 0;
	while (a < 2) {
		int b = 0;
		while (b <=5) {
			int c = 0;
			while(c<20){
				int d = 0;
				while (d <50) {
					if (n == (a * 50 + b * 20 + c * 5 + d * 2)) {
						k++;
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	if (k ==0) {
		cout << "Impossible";
	}
	else {
		cout << "k=" << k;
	}
	return 0;
}