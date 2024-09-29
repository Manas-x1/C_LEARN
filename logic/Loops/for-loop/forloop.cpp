#include <iostream>
using namespace std;

void values(int nums[]){
    for(int i = 0; i < 4 ;i++){
        cout<<nums[i]<<endl;
    }
    //return nums;
}

int main()
{
    cout<<"while-loop"<<endl;
    int index = 1;
    while(index <= 5 ){
        cout<<index<<endl;
        index++;
    }

    cout<<"for-loop"<<endl;
    for(int i = 1; i <=10 ;i++){
        cout<<i<<endl;
    }
    // its same as while loop but more compact and just better :D
    cout<<"array printing"<<endl;
    int nums[] = {1,3,5,7,9,11};
    values(nums);

    return 0;
}