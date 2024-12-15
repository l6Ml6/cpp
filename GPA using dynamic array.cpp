#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Please enter the elemet of lessoens: ";
	cin >> n;

	string* name = new string[n];
	int* unit = new int[n];
	int* score = new int[n];

	for (int i = 0; i < n; i++) {
		cout << "Please enter (" << i + 1 << ") name: ";
		cin >> name[i];
		cout << "Please enter (" << i + 1 << ") unit: ";
		cin >> unit[i];
		cout << "Please enter (" << i + 1 << ") score: ";
		cin >> score[i];
	}

	int sum = 0, sum_u = 0;
	for (int i = 0; i < n; i++) {
		sum += unit[i] * score[i];
		sum_u += unit[i];
	}
	double GPA = sum / sum_u;
	cout << "This is your GPA:" << GPA << endl;

	delete[] name;
	delete[] unit;
	delete[] score;
	return 0;
}