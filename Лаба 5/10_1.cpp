#include<iostream>
using namespace std;
int main()
{
	int* a;  // указатель на массив
	int i = 0, size = 0, j, r = 0;
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
	int max = abs(a[0]);
	for (int i = 0; i < size; i++)
	{
		if (max < abs(a[i]) {
			max = abs(a[i]);
				r = i;
		}
	}
	cout << "Number element with max abs is " << r + 1;
}