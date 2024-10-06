#include <iostream>
#include <cmath>
using namespace std;

void welcome()
{
    string GREEN = "\033[32m"; // Green color
    string RED = "\033[31m"; // Red color
    string RESET = "\033[0m"; // Reset to default color
    cout << GREEN << "welcome to the calculator"<< RESET << endl;
    cout << GREEN << "you can use the following operators: " << RESET << endl;
    cout << RED << "+, -, *, /, %, ^ (for two values)" << RESET << endl;
    cout << RED << "Sq, Cube, sroot, croot, !, log, trig (for single value)" << RESET << endl;
    cout << RED << "exit(to you know what;D)" << RESET << endl;

    
}
//funtions for calculator
//for dual value calcutalion
//addition
double add(double a, double b) 
{
    double sum = a + b;
    return sum;
}
//subraction
double sub(double a, double b)
{
    double sub = a - b;
    return sub;
}
//multiplication
double mul(double a, double b)
{
    double mul = a * b;
    return mul;
}
//division
double divi(double a, double b)
{   
    if(b == 0){
        cout << "not defined" << endl;
        return 0;
    }else{
    double div = a / b;
    return div;
    }
}
//modulus
int mod(int a, int b)
{
    if(b == 0){
        cout << "not defined" << endl;
        return 0;
    }else{
    double mod = a % b;
    return mod;
    }
}
//exponantial
double power(double a, double b)
{
    double power = pow(a, b);
    return power;
}

//for single value calcutalion

//square
double square(double a)
{
    double square = pow(a, 2);
    return square;
}
//cube
double cube(double a)
{
    double cube = pow(a, 3);
    return cube;
}
//squareroot
double squareroot(double a)
{
    double squareroot = sqrt(a);
    return squareroot;
}
//cuberoot
double cuberoot(double a)
{
    double cuberoot = cbrt(a);
    return cuberoot;
}
//factorial
double factorial(double a)
{
    double factorial = 1;
    for (double i = 1; i <= a; i++)
    {
        factorial = factorial *i;
    }
    return factorial;
}
//log
double log(double a)
{
    double log = log10(a);
    return log;
}
//trigonometric functions
double trig(string t ,double a)
{
    //defining the variables
    double si;
    double arcsi;
    double co;
    double arcco;
    double ta;
    double arcta;
    double se;
    double cose;
    double ct;
    
    //sin
    if (t == "sin"){
    double si = sin(a);
    return si;
    }
    //arcsin
    else if (t == "arcsin"){
    double arcsi = asin(a);
    return arcsi;
    }
    //cos
    else if (t == "cos"){
    double co = cos(a);
    return co;
    }
    //arccos
    else if (t == "arccos"){
    double arcco = acos(a);
    return arcco;
    }
    //tan
    else if (t == "tan"){
    double ta = tan(a);
    return ta;
    }
    //arctangent
    else if (t == "arctangent"){
    double arcta = atan(a);
    return arcta;
    }
    //sec
    else if (t == "sec"){
    double se = 1/cos(a);
    return se;
    }
    //cosec
    else if (t == "cosec"){
    double cose = 1/sin(a);
    return cose;
    }
    //cot
    else if (t == "cot"){
    double ct = 1/tan(a);
    return ct;
    }
    //error handeling
    else{
    cout << "invalid operator" << endl;
    }
}
void help(){
    string GREEN = "\033[32m"; // Green color
    string RED = "\033[31m"; // Red color
    string RESET = "\033[0m"; // Reset to default color
    cout << GREEN << "you can use the following operators: " << endl;
    cout << RED << "+, -, *, /, %, ^ (for two values)" << endl;
    cout << RED << "Sq, Cube, sroot, croot, !, log, trig (for single value)" << RESET << endl;
    
}


int main()
{
    //defining the variables
    double num1;
    string op;
    double num2 ;

    welcome();

    while (op != "exit"){
    //taking the input from the user
    cout << "Enter the operator: ";
    cin >> op;
    cout << "Enter the value of a: ";
    cin >> num1;

    //checking if the calcuulation is for single value or dual value
    //for dual value
    if (op == "+"|| op == "-" || op == "*" || op == "/" || op == "%" || op == "^"){ 
    cout << "Enter the value of b: ";
    cin >> num2;

    if (op == "+"){
    cout << "The sum is: " << add(num1, num2) << endl; //calling add function
    }
    else if (op == "-")
    {
    cout << "The sub is: " << sub(num1, num2) << endl; //calling sub function
    }
    else if (op == "x")
    {
    cout << "The mul is: " << mul(num1, num2) << endl; //calling mul function
    }
    else if (op == "/")
    {
    cout << "The div is: " << divi(num1, num2) << endl; //calling div function
    }
    else if (op == "%")
    {
    cout << "The mod is: " << mod(num1, num2) << endl; //calling mod function
    }
    else if (op == "^")
    {
    cout << "The power is: " << power(num1, num2) << endl; //calling power function
    }
    else
    {
    cout << "Invalid operator" << endl; //error handeling
    continue;
    }
    }
    else if (op == "help"){
    help();
    continue;
    }
    //for single value
    else{
    if (op == "Sq"){
    cout << "The square is: " << square(num1) << endl; //calling square function
    }
    else if (op == "Cube"){
    cout << "The cube is: " << cube(num1) << endl; //calling cube function
    }
    else if (op == "sroot"){
    cout << "The squareroot is: " << squareroot(num1) << endl; //calling squareroot function
    }
    else if (op == "croot"){
    cout << "The cuberoot is: " << cuberoot(num1) << endl; //calling cuberoot function
    }
    else if (op == "!"){
    cout << "The factorial is: " << factorial(num1) << endl; //calling factorial function
    }
    else if (op == "log"){
    cout << "The log is: " << log(num1) << endl; //calling log function
    }
    else if (op == "trig"){ //trigonometric functions
        string t;
        cout << "Enter the trigonometric function: ";
        cin >> t;
        cout << "The trigonometric function is: " << trig(t, num1) << endl;
    }
    else{
    cout << "Invalid operator"<<endl; //error handeling
    continue;
    }
    }
    cout<<"  "<<endl;
    }
    return 0;
}