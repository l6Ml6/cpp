#include <iostream>
#include <string>
using namespace std;

int main() {
	string st1;
	char ch;
	int n = 0, found = -1;
	cout << "Please enter the word: ";
	cin >> st1;
	cout << "Please enter the charcter for sreaching: ";
	cin >> ch;

	n = st1.size();
	for (int j = 0; j < n; j++) {
		if (st1[j] == ch) {
			found = j + 1;
			break;
		}
	}
	if (found == -1) cout << found << endl;
	else cout << "Charcter '" << ch << "' find in: " << found << endl;

	return 0;
}