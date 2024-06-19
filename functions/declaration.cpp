#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

double power(double, int); // declaration

int main()
{
    int base, exponent;
    cout << "What is the base?:";
    cin >> base;
    cout << "What is the exponent?:";
    cin >> exponent;
    double mypower = power(base, exponent);
    cout << mypower << std::endl;
    return 0;
}

double power(double base, int exponent) // definition
{
    return 0.0;
}
