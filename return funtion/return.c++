#include<iostream>
using namespace std;

int cube( int num)
{
    int result = num * num * num;
    return result;
}
int main()
{
    cube(9);
    cout << cube(9) << endl;
    return 0;
}                                               