#include<stdio.h>
int main()
{
	int a = 3, b = 5;
	printf("a=%d,b=%d\n", a, b);
	a += b;
	b = a - b;
	a = a - b;
	printf("a=%d,b=%d", a, b);
	return 0;
}