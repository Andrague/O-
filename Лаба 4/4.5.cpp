#include<iostream>
using namespace std;
int natur(int n) {
	int  counter = 0, a = 0, m = 0;
	int step = 0;
	m = n;
	while (n > 0) {
		a = n % 10;
		if ((a != 0) && ((m % a) == 0)) {
			counter++;
		}
		step++;
		n = n / 10;
	}
	if (step == counter)
		return 1;
	else 
		return 0;
}

int main() {
	int n = 0;
	cout << "Enter max number:";
	cin >> n;
	int  x = natur(14);

	for (int i = 1; i <= n; i++) {
		if (natur(i) > 0) {
			cout << i << endl;
		}
	}

}


