#include <iostream>

using namespace std;

void hello(); //calls the funtion parameters first 

void crt(string name ,int age) //in the brackets are the parameters which will be called from the main funtion
{
    cout << "Hello " << name << endl;
    cout << "You are " << age << " years old" << endl;
    return;
}
int main() //this is the main funtion which will always be called first to execute in the code
{
    hello(); //this is calling the hello funtion
    string name;
    int age;
    cout << "What is your name?" << endl;
    getline(cin, name);
    cout << "enter your age " << name << " : " << endl;
    cin >> age;
    crt(name,age); //this is passing the parameters to the crt funtion
    return 0;
    
}

void hello() //funtion 
{
    cout << "hello world" << endl;
    return;
}

// a funtion must be called before main funtion otherwise it will not work as main funtion wont know about it.