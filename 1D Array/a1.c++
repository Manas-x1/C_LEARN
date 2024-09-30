#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int luckynums[] = {4, 8, 15, 16, 23, 42};
    cout << "first element of the array is :";
    cout << luckynums[0] << endl;
    luckynums[3] = 19;
    cout << "the values of element are:"<< luckynums[0] <<luckynums[1] <<luckynums[2]<<luckynums[3]<<luckynums[4]<< endl;
    
    int nums[20];
    nums[0] = 100;
    cout << nums[0] << endl;
    

    return 0;
}