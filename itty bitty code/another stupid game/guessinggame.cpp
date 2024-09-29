#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int guess;

if(guess == num){
    cout<<"your guess was right"<< endl;
}
else{
    while(guess != num){
        cout<<"enter you number between 0-10 : "<< endl;
        cin >> guess;
    }
} 
    return 0;
}
