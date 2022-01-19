#include<iostream>
using namespace std;
int main() {
	int n, i = 2, k = 0;

    cout << "Enter a number:";
    cin >> n;
	while (i<=n) {
		
		while (k < n / 2) {
			if (i%k == 0) {
				cout << i;
				k = n;
			}
			k++;
		}
	
		i++;
	}

    cout << "Prime numbers less than  to " << n << " are \n";
	return 0;
}