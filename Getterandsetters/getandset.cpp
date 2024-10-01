#include<iostream>
using namespace std;

class movies{
    private:
    string rateing;
    public:
    string name;
    int year;
    string director;
    movies(string n,int y,string d,string r){
        name=n;
        year=y;
        director=d;
        setrateing(r);
        cout<<name<<" "<<year<<" "<<director<<" "<<rateing<<endl;
        
    }
    void setrateing(string r){
        if(r == "G" || r == "PG" || r == "PG-13" || r == "R" || r == "NR"){
            rateing=r;
        }else{
            rateing="Invalid";
        }
    }
};

int main()
{
    movies m1("Avengers",2012,"Joss Whedon","Nigga");
    movies m2("Avengers: Age of Ultron",2015,"Joss Whedon","PG-13");
    movies m3("Avengers: Infinity War",2018,"Anthony Russo, Joe Russo","PG");
    movies m4("Avengers: Endgame",2019,"Anthony Russo, Joe Russo","PG-13");



    return 0;
}