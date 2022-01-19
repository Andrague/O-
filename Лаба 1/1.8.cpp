#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a = 11, a2 = 7, a3 = 6;
	a = a-a2;
	a2 = a2 + a2;
	a2 = a2 - a3;
	a3 = a3 + a3;
	a3 = a3 - a;
	a = a + a;
	cout <<"\n" <<"a= " << a;
	cout << "\n" << "a2= " << a2;
	cout << "\n" << "a3= " << a3;
	return 0;
}