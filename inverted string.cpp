#include <iostream>
#include <string>

using namespace std;

int main() {
    string st1;
    int n = 0;

    cout << "Please enter the word: ";
    cin >> st1;
    n = st1.size();

    char* st2 = new char[n];
    for (int i = 0; i < n; i++) {
        st2[i] = st1[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << st2[i];
    }
    cout << endl;

    delete[] st2;
    return 0;
}
