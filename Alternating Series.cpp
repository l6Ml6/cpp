#include <iostream>
using namespace std;

int main() {
	int n, sum = 0, i = 1, sign, term;
	cout << "Please enter (n): ";
	cin >> n;
	while (i <= n) {
		if (i % 2 == 1) {
			sign = +1;
		}
		else {
			sign = -1;
		}
		term = sign * i;
		sum = sum + term;
		i++;
	}
	cout << "Answer: " << sum << endl;
}