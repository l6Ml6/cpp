#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Please enter the elemet: ";
	cin >> n;
	int* array = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Please enter num (" << i + 1 << ") :";
		cin >> array[i];
	}

	bool flag = false;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (array[j] > array[j + 1]) {
				flag = true;
				swap(array[j], array[j + 1]);
			}
		}
		if (flag == false) break;
	}

	for (int i = 0; i < n; i++) {
		if (i < n - 1) cout << array[i] << " < ";
		else cout << array[i];
	}
	cout << endl;

	delete[] array;
	return 0;
}