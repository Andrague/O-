#include<iostream>
using namespace std;
int main()
{
	int* a;  // указатель на массив
	int i = 0, size = 0, p=0, k, S = 0;
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
	int z = 0;
	for (; i < size; i++) {
		if (p < a[i]) {
			k = i;
			z++;
		}
	}
	if (z==0) {
		cout << "Possitive number is abssent";
	}
	else {
		i = k;
		while (i < size) {
			S = S + i;
			i++;
		}
		cout << "Sum is" << S;
	}
	return 0;
}