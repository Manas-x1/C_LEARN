#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int guess;
    int guesscount = 0;
    int guesslimit = 3;
    
    do{
        if(guesscount<guesslimit){
        cout<<"enter you number between 0-10 : "<<endl;
        cin >> guess;
        guesscount++;
        }else{
            cout<<"out of guesses"<< endl;
            break;
    }}
    while(guess != num);
    
    if(guess == num){
            cout<<"your guess was right"<< endl;
            cout<<"chance taken: "<<guesscount<<"/3"<<endl;
        }else{

        }
        
    
    return 0;
}
