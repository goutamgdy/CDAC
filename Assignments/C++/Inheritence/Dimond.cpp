#include <iostream>
#include <cstring>
using namespace std;

class Date
{
    int day, month, year;
    public:
        Date();
        Date(int, int, int);
        void Accept();
        void Display();
};


void Date :: Accept(){
    cout<<"Enter Date:- "<<endl;
    cin>>day>>month>>year;
}

Date :: Date(){
    day = 1;
    month = 1;
    year = 2000;
}

Date :: Date(int d, int m ,int y){
    day = d;
    month = m;
    year = y;
}

void Date :: Display(){
    cout<<"Date: "<<day<<"/"<<month<<"/"<<year<<endl;
}

class Employee
{
    int eid;
    char name[20];
    Date dob;
    public:
        Employee();
        Employee(int, const char*, int, int, int);
        void Accept();
        void Display();
};

Employee :: Employee(){
    eid = 100;
    strcpy(name, "NA");
}


void  Employee :: Accept(){
    cout<<"Enter Employee Details:- "<<endl;
    cin>>eid>>name;
    dob.Accept();
}
Employee :: Employee(int e, const char* n, int d ,int m, int y):dob(d,m,y){
    eid = e;
    strcpy(name, n);
}

void Employee :: Display(){
    cout<<"Employee Deails:- "<<endl;
    cout<<"EID:- "<<eid
        <<" "<<"Name:- "<<name<<endl;
    dob.Display();
}

class WageEmployee : public Employee
{
    int hour;
    int rate;
    public:
        WageEmployee();
        WageEmployee(int, const char*, int, int, int, int, int);
        void Display();
        void Accept();
};

void WageEmployee :: Accept(){
    Employee :: Accept();
    cin>>hour>>rate;
}

WageEmployee :: WageEmployee(){
    hour = 0;
    rate = 0;
}

WageEmployee :: WageEmployee(int e, const char* n, int d, int m, int y, int h, int r):Employee(e,n,d,m,y){
    hour = h;
    rate = r;
}
void WageEmployee :: Display(){
    Employee :: Display();
    cin>>hour>>rate;
    
}

class SalesPerson : public WageEmployee
{
    int sales;
    int commission;
    public:
        SalesPerson();
        SalesPerson(int, const char*, int, int, int, int, int, int, int);
        void Display();
        void Accept();
};
SalesPerson ::SalesPerson(){
    sales = 0;
    commission = 0;
}

SalesPerson ::SalesPerson(int e ,const char* n, int d, int m ,int y, int h, int r, int s, int c):WageEmployee(e, n,d,m,y,h,r){
    sales = s;
    commission = c;
}
void SalesPerson :: Accept(){
    WageEmployee :: Accept();
    cin>>sales>>commission;
}
void SalesPerson :: Display(){
    WageEmployee :: Display();
    cout<<sales<<" "<<commission;
}

class Manager : public Employee
{
    int sub;
    double salary;
    public:
        Manager();
        Manager(int ,const char*, int , int, int, int, double);
        void Accept();
        void Display();
};
Manager :: Manager(){
    sub = 0;
    salary = 0;
}

Manager :: Manager(int e,const char* n, int d, int m, int y, int s, double sal):Employee(e,n,d,m,y){
    sub = s;
    salary = sal;
}
void  Manager :: Accept(){
    cout<<"Enter Manager Details:- "<<endl;
    Employee :: Accept();
    cin>>sub>>salary;
}
void Manager :: Display(){
    cout<<"MAnager Details:- ";
    Employee :: Display();
    cout<<sub<<" "<<salary<<endl;
}

class SlaesManager : public SalesPerson, public Manager
{
    public:
        void Display();
};
void SlaesManager :: Display(){
    SalesPerson :: Display();
    Manager :: Display();
}

int main(){
    Employee *cptr;
    cptr = new SlaesManager();
    SlaesManager s1;
    // m1.Accept();
    s1.Display();
}

