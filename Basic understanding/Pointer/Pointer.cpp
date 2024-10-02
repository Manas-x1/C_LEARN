#include <iostream> 
using namespace std;

int main()
{
    int age = 20;
    int *pAge = &age;
    string grade = "ahhh";
    string *pGrade = &grade;
    cout << "age: " << &age << endl;
    cout << "grade: " << &grade << endl;
    cout << "value stored in the above addresses repectively" << endl;
    cout << *pAge << endl; 
    cout << *pGrade << endl;

    return 0;
}