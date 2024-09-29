#include <iostream>
using namespace std;

string largest_value(int a, int b, int c){
    string result;
    if(a >= b && a >= c){
        result = "A is bigger then B and C";
    }else if(a <= b && !(a <= c)){
        result = "A is smaller then B but bigger then C";
    }else if(a <= c && !(a <= b)){
        result = "A is smaller then C and not larger then B";
    }else{
        result = "A is smaller then B and C";
    }
    return result;
}
int main(){
    int a = 1;
    int b = 50;
    int c = 20;
    cout << largest_value(a,b,c) << endl;
    return 0;
}