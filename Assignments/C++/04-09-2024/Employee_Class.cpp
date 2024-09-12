#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cstring>
using namespace std;

class Address
{
    char area[20], city[10], pin[10];
    public:
        Address(){
            strcpy(area, "Wakad");
            strcpy(city, "Pune");
            strcpy(pin, "411057");
        }
        Address(const char* ar, const char* ct, const char* pn){
            strcpy(area, ar);
            strcpy(city, ct);
            strcpy(pin, pn);
        }

        void Display(){
            cout<<"\n\n\t Area: "<<area<<" City: "<<city<<" Pin: "<<pin;
        }
        void Accept(){
            cin>>area>>city>>pin;
        }
        char* getArea(){
            return area;
        }
        char* getCity(){
            return city;
        }
        char* getPin(){
            return pin;
        }
};

class Employee
{
    int e_Id;
    char name[20];
    Address perAddress, curAddress;
    public:
        Employee(){
            e_Id =  1;
            strcpy(name, "ABC");
        }
        Employee(int e, const char* nm, const char* a1, const char* c1, const char* p1, const char* a2, const char* c2, const char* p2)
                :perAddress(a1,c1,p1),curAddress(a2,c2,p2){
                    e_Id = e;
                    strcpy(name, nm);
        }
        void Display(){
            cout<<"E\n Employee Details"<<e_Id<<name;
            perAddress.Display();
            curAddress.Display();
        }
        void Accept(){
            cout<<"\nEnter Employee-ID, Name: ";
            cin>>e_Id>>name;
            perAddress.Accept();
            curAddress.Accept();
        }
        Address grtPerAddress(){
            return perAddress;
        }
};

int main(){
    int size;
    Employee* emps;
    cout<<"\n Enter Employee Object Array Size: ";
    cin>>size;
    emps = new Employee[size];
    for(int i=0;i<size;i++){
        emps[i].Accept();
    }
    for(int i=0;i<size;i++){
        emps[i].Display();
    }
}