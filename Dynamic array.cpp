#include <iostream>
using namespace std;

int main () {
	int n, i;
	cout << "Please enter how many numbers do you want to enter: ";
	cin >> n;

	int* num = new int[n];
	int* res = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "please enter num(" << i + 1 << "): ";
		cin >> num[i];
		res[i] = ( num[i] * 2 ) + 5;
	}
	
	for (i = 0; i < n; i++) {
		cout << "Answer(" << i + 1 << ") :" << res[i] << endl;
	}

	delete[] num;
	delete[] res;
	return 0;
}