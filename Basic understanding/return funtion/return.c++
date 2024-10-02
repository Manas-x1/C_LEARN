#include<iostream>
using namespace std;

int cube( int num)
{
    int result = num * num * num;
    return result; //this is the return funtion which will return the result to the main funtion
    // it also signifies that the funtion is done and will not run any more code
}
int main()
{
    cout << cube(9) << endl; //this will print the result of the funtion when a value is passed to the funtion
    return 0;
}      