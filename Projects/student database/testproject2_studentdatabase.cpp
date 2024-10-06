#include <iostream>
using namespace std;

//defing the class "student"
class student{
    private: //private variables
    //variables
    int rollno;
    string name;
    int age;
    string address;
    string phone;
    string email;
    string course;
    string branch;
    string grade;

    //constructor
    public:
    void setattributes(int rnum, string nam, int ag, string add, string ph, string em, string cou, string br, string gr)
    {
        
        rollno = rnum;
        name = nam;
        age = ag;
        address = add;
        phone = ph;
        email = em;
        course = cou;
        branch = br;
        grade = gr;
        
        return;
    }
    void display()
    {
        cout << "Roll number: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Phone number: " << phone << endl;
        cout << "Email: " << email << endl;
        cout << "Course: " << course << endl;
        cout << "Branch: " << branch << endl;
        cout << "Grade: " << grade << endl;
        cout << "-------------------------------------------------" << endl;
}
};

int main()
{
    student cl;{
    cl.setattributes(1, "John", 20, "123 Main St", "555-1234", "john@gmail.com", "Computer Science", "Computer Science", "A");
    cl.setattributes(2, "Jane", 21, "456 Elm St", "555-5678", "jane@gmail.com", "Computer Science", "Computer Science", "B");
    cl.setattributes(3, "Bob", 22, "789 Oak St", "555-9012", "bob@gmail.com", "Computer Science", "Computer Science", "C");
    cl.setattributes(4, "Alice", 23, "321 Pine St", "555-3456", "alice@gmail.com", "Computer Science", "Computer Science", "A");
    }
    //inputing the values
        int rnum = 1;
        string nam;
        int ag;
        string add;
        string ph;
        string em;
        string cou;
        string br;
        string gr;

        //inputing the values
        while (true)
        {
        cout << "Enter roll number: ";
        cin >> rnum;
        cout << "Enter name: ";
        cin >> nam;
        cout << "Enter age: ";
        cin >> ag;
        cout << "Enter address: ";
        cin >> add;
        cout << "Enter phone number: ";
        cin >> ph;
        cout << "Enter email: ";
        cin >> em;
        cout << "Enter course: ";
        cin >> cou;
        cout << "Enter branch: ";
        cin >> br;
        cout << "Enter grade: ";
        cin >> gr;
        //adding the info to the object
        cl.setattributes(rnum, nam, ag, add, ph, em, cou, br, gr);
        //displaying the info
        cl.display();

        }

    return 0;
}