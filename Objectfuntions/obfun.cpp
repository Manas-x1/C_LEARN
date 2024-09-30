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
        string canPromote() {
            if (salary < 50000) {
                return "yes";
            }else {
                return "no";
            }
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
    cout << "-------------------------------------------------------------------------" << endl;
    Emp1.display();
    cout << "-------------------------------------------------------------------------" << endl;
    Emp2.display();
    cout << "-------------------------------------------------------------------------" << endl;
    Emp3.display();
    cout << "-------------------------------------------------------------------------" << endl;
    Emp4.display();
    cout << "-------------------------------------------------------------------------" << endl;
    Emp5.display();
    cout << "-------------------------------------------------------------------------" << endl;;
    Emp6.display();
    cout << "-------------------------------------------------------------------------" << endl;
    Emp7.display();
    cout << "-------------------------------------------------------------------------" << endl;
    Emp8.display();
    cout << "-------------------------------------------------------------------------" << endl;
    // Check if employees can be promoted
    cout << "Can " << Emp1.name << " be promoted? " << Emp1.canPromote() <<"because their salary is " << Emp1.salary <<"$"<< endl;
    cout << "Can " << Emp2.name << " be promoted? " << Emp2.canPromote() <<"because their salary is " << Emp2.salary <<"$"<< endl;
    cout << "Can " << Emp3.name << " be promoted? " << Emp3.canPromote() <<"because their salary is " << Emp3.salary <<"$"<< endl;
    cout << "Can " << Emp4.name << " be promoted? " << Emp4.canPromote() <<"because their salary is " << Emp4.salary <<"$"<< endl;
    cout << "Can " << Emp5.name << " be promoted? " << Emp5.canPromote() <<"because their salary is " << Emp5.salary <<"$"<< endl;
    cout << "Can " << Emp6.name << " be promoted? " << Emp6.canPromote() <<"because their salary is " << Emp6.salary <<"$"<< endl;
    cout << "Can " << Emp7.name << " be promoted? " << Emp7.canPromote() <<"because their salary is " << Emp7.salary <<"$"<< endl;
    cout << "Can " << Emp8.name << " be promoted? " << Emp8.canPromote() <<"because their salary is " << Emp8.salary <<"$"<< endl;
    cout << "-------------------------------------------------------------------------" << endl;

    return 0;
}
