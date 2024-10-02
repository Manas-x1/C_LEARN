#include <iostream>
using namespace std;

int main()
{
    int age; //inputs an integer
    cout << "Enter your age: "; //cout is console output (print funtion)
    cin >> age; //cin is console input (take input)
    cout << "Your age is: " << age << endl;

    char grade; //inputs only a single character
    cout << "Enter your grade: ";
    cin >> grade;
    cout << "Your grade is: " << grade << endl;
    
    string name; //inputs a string
    cout << "Enter your name: ";
    cin >> name;
    cout << "Your name is: " << name << endl;

    string country;
    cout << "Enter your country: ";
    cin.ignore(); //ignore is used to ignore the newline character(basically removes input buffer)
    getline(cin, country); //getline is used to take input with spaces(or basically the "whole line")
    cout << "Your country is: " << country << endl;
    return 0;
}