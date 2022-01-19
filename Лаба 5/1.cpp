#include<iostream>
using namespace std;
int main()
{
	int* a;  // указатель на массив
	int i = 0, size = 0, p = 1, S = 0;
	int sum = 0; //сумма модулей
	cout << "Enter array size:";
	cin >> size;
	a = new int[size];
	for (i = 0; i < size; i++) {
		a[i] = 10 - rand() % 21;
	}
	for (i = 0; i < size; i++) {
		cout << "a["; cout << i; cout << "]=";
		cout << a[i];
		cout << endl;
	}
	while (i < size) {
		i++;
		p++;
		if (a[i] < 0) {
			S+=a[i];
		}
		if (i % 2 == 0) {
			p*= a[i];
		}
		
	}
	cout << "Negative elements " << S << "Mult " << p;
	return 0;
}