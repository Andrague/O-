#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main(int, char**)
{
	int a, b, c, d;
	cout << "Enter a three-digit number: ";
	cin >> a;
	b = a / 100;
	a = a % 100;
	c = a / 10;
	a = a % 10;
	d = a;
	int sum = b + c + d ;
	cout <<sum;
	return 0;
}