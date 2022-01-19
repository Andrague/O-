#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int  S = 1000,y=0;
	while (S <= 2000) {
		S = S* 1.03;
		y++;
	}
	cout << "Ears= " << y;
	return 0;
}
