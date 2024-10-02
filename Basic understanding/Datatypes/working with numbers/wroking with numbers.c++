#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    cout << 5 + 7 << endl; //addition
    cout << 5 - 7 << endl; //subtraction
    cout << 5 * 7 << endl; //multiplication
    cout << 5 / 7 << endl; //division (integer division)
    double div = 5.0 / 7.0; //actual division
    cout << div << endl;
    cout << 5 % 7 << endl; //modulus(remainder giver)
    cout << 5 + 7 * (12 / 6) << endl; //and basic math works as you would expect (bodmas)

    //increment and decrement
    int x = 5;
    cout << x << endl;
    x++; //adds one to x
    cout << x << endl;
    x--; //subtracts one from x
    cout << x << endl;

    x += 70; //adds 5 to x
    cout << x << endl;
    x -= 15; //subtracts 5 from x
    cout << x << endl;
    x *= 5; //multiplies x by 5
    cout << x << endl;
    x /= 5; //divides x by 5
    cout << x << endl;
    x %= 5; //modulus
    cout << x << endl;
    
    //math funtion
    cout << pow(3,3) <<endl; //3^3
    cout << sqrt(64) <<endl;// 8^(1/2)
    cout << round(3.7) <<endl; // rounds to the nearest smallest integer
    cout << floor(3.3) <<endl; // rounds down to the nearest integer
    cout << fmax(23,53) <<endl; //fmax gives the highest number of 2
    cout << fmin(3,332) <<endl; //fmin basically does the opposite of fmax

    return 0;

}