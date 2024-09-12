#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Date
{
    int day, month, year;
    public:
        Date();
        Date(int, int, int);
        void display();
};

Date :: Date(){
    day = 1;
    month = 1;
    year = 2000;
}
Date :: Date(int d, int m, int y){
    day = d;
    month = m;
    year = y;
}
void Date :: display(){
    cout<<"Date:- "<<day<<"/"<<month<<"/"<<year<<endl;
}

class Employee
{
    int eid;
    char name[20];
    Date dob;
    public:
        Employee();
        Employee(int, const char*, int, int, int);
        virtual void display();
};

Employee :: Employee(){
    eid = 101;
    strcpy(name, "NA");
}
Employee :: Employee(int e, const char* n, int d, int m, int y):dob(d,m,y){
    eid = e;
    strcpy(name, n);
}
void Employee :: display(){
    cout<<eid<<" "<<name<<endl;
    dob.display();
}

class WageEmployee : public Employee
{
    int hour;
    int rate;
    public:
        WageEmployee();
        WageEmployee(int, const char* , int, int, int, int,int);
        int getHour();
        int getRate();
        double getSalary();
        void display();
};
int WageEmployee :: getRate(){
    return rate;
}
int WageEmployee :: getHour(){
    return hour;
}

WageEmployee :: WageEmployee(){
    hour = 0;
    rate = 0;
}
WageEmployee :: WageEmployee(int e, const char* n, int d, int m,int y, int h, int r):Employee(e, n, d,m,y){
    hour = h;
    rate = r;
}
void WageEmployee :: display(){
    Employee::display();
    cout<<"Hour: "<<hour<<" Rate: "<<rate<<endl;
}

double WageEmployee ::  getSalary(){
    return (double) hour * rate;
    
}
class SalesPerson : public WageEmployee
{
    int sales;
    int commission;
    public:
        SalesPerson();
        SalesPerson(int, const char*, int, int, int, int, int, int,int);
        double GetSalary();
        void display();
};

SalesPerson :: SalesPerson(){
    sales = 0;
    commission = 0;
}
SalesPerson :: SalesPerson(int e, const char* n,int d, int m, int y, int h, int r, int s, int c):WageEmployee(e,n,d,m,y,h,r){
    sales = s;
    commission = c;
}


double SalesPerson :: GetSalary(){
    double salary = (WageEmployee :: getHour() * WageEmployee :: getRate()) + commission * sales;
    return salary;
}
void SalesPerson :: display(){
    WageEmployee :: display();
    cout<<"Sales: "<<sales<<" "<<"Commission: "<<commission<<endl;
}


int main(){
    Employee *eptr;
    WageEmployee* = new  we1(100, "raja", 10,12,2000,10,500);
    eptr = &we1; // Polymorphisom if we uses virtual keyword in Employee base-most class
    eptr->display();
    return 0;

}
