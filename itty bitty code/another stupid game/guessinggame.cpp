#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int guess;

    do{
        cout<<"enter you number between 0-10 : "<< endl;
        cin >> guess;
    }
    while(guess != num);
    cout<<"your guess was right"<< endl;
    return 0;
}
