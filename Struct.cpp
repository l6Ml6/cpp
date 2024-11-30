#include <iostream>
#include <fstream>
using namespace std;


int main() {
	struct {
		string name;
		string family;
		int age;
	} mydata;

	cout << "Enter yout name: ";
	cin >> mydata.name;
	cout << "Enter your family: ";
	cin >> mydata.family;
	cout << "Enter your age: ";
	cin >> mydata.age;

	ofstream Data("data.txt");
	Data << "Name: " << mydata.name << endl;
	Data << "Last name: " << mydata.family << endl;
	Data << "Age: " << mydata.age << endl;
	Data.close();

	return 0;
}