#include <iostream>
#include<vector>
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
    
    //creating the object
    student cl;{
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

        char choice;

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
        cin.ignore();
        cout << "Enter grade: ";
        cin >> gr;
        //adding the info to the object
        cl.setattributes(rnum, nam, ag, add, ph, em, cou, br, gr);
        //displaying the info
        cl.display();

        cout << "Do you want to enter more data? (y/n): ";
        cin >> choice;
        if (choice == 'n')
        {
            break;
        }else{
            continue;
        }
        }

    return 0;
}