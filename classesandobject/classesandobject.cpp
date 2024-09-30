#include<iostream>
using namespace std;

class Employee{
    public:
        string name;
        int age;
        int salary;
        string role;
        string department;
};

int main()
{
    // Create two employee objects
    Employee Emp1;
    Employee Emp2;

    // Set values for Emp1
    Emp1.name = "John";
    Emp1.age = 30;
    Emp1.salary = 50000;
    Emp1.role = "Manager";
    Emp1.department = "IT";

    // Set values for Emp2
    Emp2.name = "Jane";
    Emp2.age = 25;
    Emp2.salary = 40000;
    Emp2.role = "Developer";
    Emp2.department = "IT";
    
    // Output the details of both employees
    cout << "Employees: " << Emp1.name << ", " << Emp2.name << endl;
    cout << "Age: " << Emp1.age << ", " << Emp2.age << endl;
    cout << "Salary: " << Emp1.salary << ", " << Emp2.salary << endl;
    cout << "Role: " << Emp1.role << ", " << Emp2.role << endl;
    cout << "Department: " << Emp1.department << ", " << Emp2.department << endl;
    cout << "-------------------------------------------------" << endl;

    return 0;
}