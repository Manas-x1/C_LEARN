#include<iostream>
using namespace std;

class Employee{
    public:
    // Member attributes
        int id;
        string name;
        int age;
        int salary;
        string role;
        string department;
        // Constructor function
        Employee(int aid, string aname, int aage, int asalary, string arole, string adepartment) {
            id = aid;
            name = aname;
            age = aage;
            salary = asalary;
            role = arole;
            department = adepartment;
        }
        //initialize the attributes
        void display() {
            cout << "id.no: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Salary: " << salary << endl;
            cout << "Role: " << role << endl;
            cout << "Department: " << department << endl;
            
        }
};

int main()
{
    // Create two employee objects
    Employee Emp1(1,"John", 30, 50000, "Manager", "HR");
    Employee Emp2(2,"Jane", 25, 40000, "Developer", "IT");
    Employee Emp3(3,"Mike", 35, 60000, "Designer", "Design");
    Employee Emp4(4,"Sarah", 28, 45000, "Analyst", "Analytics");
    Employee Emp5(5,"David", 32, 55000, "Sales", "Sales");
    Employee Emp6(6,"Emily", 27, 42000, "Marketing", "Design");
    Employee Emp7(7,"Alex", 31, 52000, "Operations", "Management");
    Employee Emp8(8,"Olivia", 29, 48000, "Finance", "Sales");
    
    // Output the details of both employees
    cout << "Company Employee Details:" << endl;
    cout << "-------------------------------------------------" << endl;
    Emp1.display();
    cout << "-------------------------------------------------" << endl;
    Emp2.display();
    cout << "-------------------------------------------------" << endl;
    Emp3.display();
    cout << "-------------------------------------------------" << endl;
    Emp4.display();
    cout << "-------------------------------------------------" << endl;
    Emp5.display();
    cout << "-------------------------------------------------" << endl;
    Emp6.display();
    cout << "-------------------------------------------------" << endl;
    Emp7.display();
    cout << "-------------------------------------------------" << endl;
    Emp8.display();
    cout << "-------------------------------------------------" << endl;

    return 0;
}