#include <iostream>
using namespace std;

int main() {
	int n, i = 1, s = 1;
	cout << "Please enter the number: ";
	cin >> n;
	while (i < (n + 1)) {
		s = s * i;
		i++;
	}
	cout << "Factorial: " << s << endl;
	return 0;
}