#include <iostream>
#include <string>
using namespace std;

int main() {
    string st1, st2;

    cout << "Please enter the larger string (st1): ";
    cin >> st1;
    cout << "Please enter the smaller string (st2): ";
    cin >> st2;

    int substr = st1.find(st2);
    if (substr != string::npos) {
        cout << "The substr '" << st2 << "' found in '" << st1 << "' at: " << substr + 1 << endl;
    }
    else cout << -1 << endl;

    return 0;
}
