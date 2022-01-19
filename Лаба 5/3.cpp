#include<iostream>
using namespace std;
int main()
{
	int* a;  // указатель на массив
	int i = 0, size = 0, m = 0, r = 0, S = 0;
	cout << "Enter array size:";
	cin >> size;
	a = new int[size];
	for (i = 0; i < size; i++) {
		cout << "a["; cout << i; cout << "]=";
		cin >> a[i];
	}
	for (i = 0; i < size; i++) {
		cout << a[i];
		cout << endl;
	}
	int z = 0;
	while (i < size) {
		if (a[i]==0) {
			m = i;
			z++;
			i = size;
		}
		i++;
	}
	if (z==0) {
		cout << "Zero elements are abbsent";
	}
	else {
		while (size > 0) {
			if (a[i]==0) {
				r = i;

			}
			
			size--;
		}

	}
	while (m < r) {
		S = S + m;
		m++;
	}
	cout << endl;
	cout << "Sum is " << S;
	return 0;
}