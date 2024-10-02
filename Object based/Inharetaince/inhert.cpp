#include<iostream>
using namespace std;

class chef{ //parent class
    public:
    void makechicken(){
        cout<<"The chef makes chicken"<<endl;
    }
    void makesalad(){
        cout<<"The chef makes salad"<<endl;
    }
    void makespecialdish(){
        cout<<"The chef makes bbq ribs"<<endl;
    }
};
class italianchef:public chef{ //subclass
    public:
    void makeparm(){
        cout<<"The chef makes chicken parm"<<endl;
    };
    void makespecialdish(){
        cout<<"The chef makes pasta"<<endl;
    }
};
class chinesechef:public chef{ //subclass
    public:
    void makefriedrice(){
        cout<<"The chef makes fried rice"<<endl;
    }
    void makespecialdish(){
        cout<<"The chef makes orange chicken"<<endl;
    }
};

int main()
{
    chef chef1;
    chef1.makespecialdish();
    italianchef italianchef1;
    italianchef1.makespecialdish();
    chinesechef chinesechef1;
    chinesechef1.makespecialdish();
    return 0;
}
