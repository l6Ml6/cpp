#include <iostream>
using namespace std;

int main() {
	int x, n, max = 0, i = 0;
	cout << "How many do you want to enter? ";
	cin >> n;

	while (i < n) {
		cout << "Plaese enter the number: ";
		cin >> x;
		int temp = x;
		if (temp > max) {
			max = temp;
		}
		i++;
	}

	cout << "\nThe maximum number is: " << max;
	return 0;
}