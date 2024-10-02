//changing a number into a string 
#include <iostream>
using namespace std;

string getdayoweek(int daynum)
{
    string dayname;

    switch(daynum){
        case 0:
        dayname = "sunday";
        break;
        case 1:
        dayname = "monday";
        break;
        case 2:
        dayname = "tuesday";
        break;
        case 3:
        dayname = "wednsday";
        break;
        case 4:
        dayname = "thursday";
        break;
        case 5:
        dayname = "friday";
        break;
        case 6:
        dayname = "saturday";
        break;
        default:
        dayname = "invalid daynum";
        break;
    }
    return dayname;
}
int main()
{
    cout<<getdayoweek(99)<<endl;
    return 0;
}