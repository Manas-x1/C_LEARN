#include <iostream>
using namespace std;

int main()
{
    string color, noun, person;
    
    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a plural noun: ";
    getline(cin, noun);
    cout << "Enter a person: ";
    getline(cin, person);

    cout << "Violets are " << color << endl;
    cout << noun <<" are blue" << endl;
    cout << "I love "<< person << endl;
    return 0;
}