#include<iostream>
using namespace std;
int main() {
	int n, i = 1, F = 1, a = 1;
	cout << "Enter n:";
	cin >> n;
	while (i <= n) {
		F = F * i;
		i++;
	}
	while(F>(a - 2) * (a - 1) * a) {
		a = a + 1;

	}
	if ((a - 2) * (a - 1) * a) {
		cout << "Possible";
	}
	else {
		cout << "Impossible";
	}
	return 0;
}