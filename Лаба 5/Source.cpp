#include<iostream>
using namespace std;
int main()
{
	int* a;  // указатель на массив
	int i = 0, z = -1, size, A, r = 0, k;
	cout << "Enter array size:";
	cin >> size;
	cout << "Enter a number";
	cin >> A;
	int count = 0;
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
		if (a[i] == A) {
			z++;
			i = r;
		}
		i++;
	}
	if (z=-1) {
		cout << "Number A is abbsent in array";
	}
	else {
		if (z = size - 1) {
			cout << "Element is last";
		}
		else {

			for (; z < size; z++) {
				if (a[z] > 0) {
					k = z;
					count++;
				}
			}
		}
		if (count == 0);
		else {
			int min = a[k];
			k++;
			while (k < min)
			{
				if (a[k] > 0) {
					if (a[k] < min) {
						min = a[k];
					}
				}
			}
		}
	}
}

