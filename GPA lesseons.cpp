#include <iostream>
using namespace std;

int main() {
	int n, i = 0;
	cout << "Please enter the number of lesseon: ";
	cin >> n;
	int* score = new int[n];
    int *unit = new int[n];
	while (i < n) {
		cout << "Please enter your score and unit in order:";
		cin >> score[i] >> unit[i];
		i++;
	}
	i = 0;
	double sum = 0, total = 0;
	while (i < n) {
		sum += score[i] * unit[i];
		total += unit[i];
		i++;
	}
	cout << "GPA: " << sum / total << endl;
}