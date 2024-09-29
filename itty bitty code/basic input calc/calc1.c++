#include <iostream>
using namespace std;
int main() 
{
    float a, b; // a,b has to be the same datatype
    cout << "Enter two numbers: ";
    cin >> a >> b; //inputs two numbers into a and b variables
    cout << "You entered " << a << " and " << b << endl;

    _Float64x x = a + b; // calculate the sum of a and b
    cout << "The sum of " << a << " and " << b << " is " << x << endl;
    return 0;
}