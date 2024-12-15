#include <iostream>
#include <cmath>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

double sine_taylor(double x, int terms) {
    double sum = 0.0;
    double power = x;
    int sign = 1;

    for (int n = 0; n < terms; ++n) {
        double term = sign * power / factorial(2 * n + 1);
        sum += term;
        sign *= -1;
        power *= x * x;
    }
    return sum;
}

int main() {
    double x;
    int terms = 10;
    cout << "Enter the value of x: ";
    cin >> x;
    double result = sine_taylor(x, terms);
    cout << "Result: " << result << endl;
    return 0;
}
