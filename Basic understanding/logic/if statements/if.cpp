#include <iostream>
using namespace std;

//if statements are used to execute a block of code if a condition is true (basic logic)
//else the else statement will be executed :D
void statement(bool male, bool tall) //this is the funtion that will be called from the main funtion
{
//checks if the user is male or not
    if(male){
    cout << "you are a male" << endl;
} else {
    cout << "you are not a male" << endl;
}
 
if(tall){
    cout << "you are tall" << endl;
} else {
cout << "you are not tall" << endl;
    }

}

int main()
{
    string gender;
    string height;
    bool male = true;
    bool tall = false;
    //cout << "enter your gender: " << endl;
    //cin >> gender;
    //cout << "are you tall: " << endl;
    //cin >> height;
    
    //if(gender == "male")
    //{
    //    male = true;
    //}else{
     //   male = false;
    //};

    //if(height == "yes")
    //{
    //    tall = true;
    //}else{
    //    tall = false;
    //};

    //statement(male,tall); //passing the parameters to the funtion

    if(male && tall) //this is the same as saying if(male == true and tall == true) (both will be true)
    {
        cout << "you are a tall male" << endl;
    }else{
        cout << "you are not a tall male" << endl;
    }
    if(male || tall) //this is the same as saying if(male == true or tall == true) (one of them will be true)
    {
        cout << "you are a tall male" << endl;
    }else{
        cout << "you are not a tall male " << endl;
    }

    return 0;

}