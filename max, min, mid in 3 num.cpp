#include <iostream>
using namespace std;

int main() {
	int x1, x2, x3;
	cout << "Please enter a number: ";
	cin >> x1;
	cout << "Please enter the second number: ";
	cin >> x2;
	cout << "Please enter the third number: ";
	cin >> x3;

	int Max = max(x1, max(x2, x3));
	int Min = min(x1, min(x2, x3));
	int Mid;

	if (Max != x1 && Min != x1) {
		Mid = x1;
	} else if (Max != x2 && Min != x2) {
		Mid = x2;
	} else {
		Mid = x3;
	}

	cout << "\nResult =   " << Max << " > " << Mid << " > " << Min << endl;
	return 0;

}