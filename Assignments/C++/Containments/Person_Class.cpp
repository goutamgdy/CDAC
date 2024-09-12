#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cstring>
using namespace std;


class Date
{
    int day, month, year;
    public:
        Date();
        Date(int, int, int);
        void Display();
};
class Person
{
    char name[20];
    Date dob;
    public:
        Person();
        // Person(const char *nm, int d, int);
        Person(const char *, int, int, int);
        void Display();
};

Person :: Person(){
    strcpy(name, "ABC");
}


Date :: Date(){
    day = 3;
    month = 3;
    year = 2024;
}

Date :: Date(int d, int m, int y){
    day = d;
    month = m;
    year = y;
}

void Date :: Display(){
    cout << "\n\n\t**** Date: "<<day<<"/"<<month<<"/"<<year<<endl;
}






Person :: Person(const char* nm, int d,int m, int y):dob(d,m,y){
    strcpy(name, nm);
}


void Person :: Display(){
    cout <<"\n\n\t***** Name: "<<name<<endl;
    dob.Display();
}
int main(){
    Person p1;
    Person p2("Seeta", 1,8,2003);
    p1.Display();
    p2.Display();
}