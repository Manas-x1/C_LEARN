#include <iostream>
using namespace std;

int power(int base, int exp)
 {
    int result = 1;
    for(int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
 }

int main()
{
    int base, exp;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exp;
    int result = power(base, exp);
    cout << base << "^" << exp << " = " << result << endl;
    return 0;
}