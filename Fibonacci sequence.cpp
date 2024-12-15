#include <iostream>
using namespace std;

int main() {
	int n = -1, a = 1, b = 1, i = 1, term;
	while (n <= 0) {
		cout << "Please enter a postive number ( n can't be zero) : ";
		cin >> n;
	}
	while (i <= n) {
		if (i != n) {
			cout << a << ",";
		}
		else {
			cout << a;
		}
		term = a + b;
		a = b;
		b = term;
		i++;
	}
	cout << "\n\n";
	return 0;
}