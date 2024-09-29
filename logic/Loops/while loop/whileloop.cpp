#include <iostream>
using namespace std;

int main()
{
    int index = 1;
    while(index <= 10) //checks the condition, runs the loop , checks again and loops till condition is no longer true
    {
        cout<<"ahhhhhhh"<<endl; //print ahhhhhh 10 times
        index++; // index +1 each time it loops till it reachs 11 when the condition no longer applies and loop breaks
    };
    int integer = 5;
    do{
        cout<<"haaaaaaaaa"<<endl; //print haaaaaaaa 2 times 
        integer--; // interger -1 each time it loops till it reaches 3 when contiotion no longer applies and loop breaks
    }while(integer > 3);// loop and then checks the condition then loops again and then checks till condition is no longer applies


    return 0;
}

//while-loop and do-while-loop are essentially opposite of each other but can be used interchangeably :D