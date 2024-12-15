#include <iostream>
using namespace std;

int main() {
	int x, y, result;
	cout << "Please enter a number: ";
	cin >> x;
	cout << "Please enter the second number: ";
	cin >> y;
	int mod = x % 2;
	if (mod == 0) {
		result = (2 * x) * 5;
	}
	else{
		result = (4 * x) + (3 * y) * 5;
	}
	cout << "Result: " << result << endl;
	return 0;
}