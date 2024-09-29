#include <iostream>
using namespace std;

int main()
{
    bool ismale = false;
    bool istall = true;

    if(ismale && istall){
        cout << "you are a male and tall" << endl;
    }else if(ismale && !istall){
        cout << "you are a male but not tall" << endl;
    }else if(!ismale && istall){
        cout << "you are not a male but you are tall" << endl;
    }else{
        cout << "you are not a male and not tall" << endl;
    }
    return 1;
}

// else if statements are used to execute a block of code if the provided condition is true.
// ! is a negation operator which means if the condition is true then the else if statement will not be executed.