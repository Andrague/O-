#include<iostream>
using namespace std;
int main()
{
	int* a;  // указатель на массив
	int i = 0, size = 0, S = 0, k = 0, m = 0, max, min;
	int sum = 0; //сумма модулей
	cout << "Enter array size:";
	cin >> size;
	a = new int[size];
	for (i = 0; i < size; i++) {
		cout << "a["; cout << i; cout << "]=";
		cin >> a[i];

	}
	for (i = 0; i < size; i++) {
		cout << "a["; cout << i; cout << "]=";
		cout << a[i];
		cout << endl;
	}
	max = a[0];
	min = a[0];
	while (i < size) {
		if (a[i] > max) {
			max = a[i];
			m = i;
		}
		if (a[i] < min) {
			min = a[i];
			k = i;
		}
		if (m > k) {
			while (i < m) {
				i = k + 1;
				S = S + i;
			}
		}
		else {
			cout << "Elements between are abbsent";
		}
		i++;
	}
	cout << "Sum is " << S;
	return 0;
}
