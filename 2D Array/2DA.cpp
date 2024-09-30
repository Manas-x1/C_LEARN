#include <iostream>

using namespace std;

int main()
{               //2d array has 2 components, 1st no of rows,2nd no of element in each row
    int numgrid[3][3] = {
                        {1,2,3},
                        {4,5,6},
                        {7,8,9}
                       };
    cout << numgrid[2][1] << endl; //prints 8

    return 0;
}
