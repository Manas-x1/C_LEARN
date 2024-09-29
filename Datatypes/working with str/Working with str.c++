#include <iostream>

using namespace std;
int main()
{
    cout << "welcome" << endl; // stands for endline (basically moves tot next line)
    cout << "to\n";            // basically used for new line (\n) is a escape sequence
    cout << "C++" << endl;

    string name = "Manas";
    cout << name.length() << endl; // length of string
    cout << name[4] << endl;       // prints the character at index 4 (indexing works same as in python)
    name[4] = 'z';                 // changes the "s" to 'z'
    cout << name << endl;
    cout << name.find("na", 0) << endl; // finds the index of the first occurence of the string "as" from index 0
    cout << name.substr(0, 3) << endl;  // prints the substring starting from index 0 and ending at index 3
    string sub = name.substr(0, 3);
    cout << sub << endl;
    return 0;
}
