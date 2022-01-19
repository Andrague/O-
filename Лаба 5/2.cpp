#include<iostream>
using namespace std;
int main()
{
	int* a;
	int i = 0, size = 0, r=0, max;
	int sum = 0; 
	cout << "Enter array size:";
	cin >> size;
	a = new int[size];
	for (i = 0; i < size; i++) {
		a[i] = 9 - rand() % 19;
	}
	for (i = 0; i < size; i++) {
		cout << a[i]<<' ';
	}
	max = a[0];
	for (int i = 0; i < size; i++) {
		if (a[i] > max) {
			max = a[i];
			r = i;
		}
	}
	cout << "Max element is " << max << endl << "His number is " << r+1;
	return 0;
}
