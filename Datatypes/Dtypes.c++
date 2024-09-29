#include <iostream>

using namespace std;

int main()
{
    char rank = 'Z'; // just a generic character (single values)
    string name = "Manas"; // just a genatric string
    int age = 17; //same as interger value
    float gpa = 3.5; // less precise than double
    double height = 177.854; // more decimal places than float
    bool student = true; // true or false

    cout<<"name: "<<name<<endl;
    cout<<"age: " <<age<<endl;
    cout<<"gpa: "<< gpa<<endl;
    cout<<"height: "<<height<<endl;
    cout<<"is a student or not " <<student<<endl;
    cout<<"rank is "<<rank<<endl;
    return 0;

}