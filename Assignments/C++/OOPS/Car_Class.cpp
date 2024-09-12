#include<bits/stdc++.h>
using namespace std;

class Date
{
    private:
    int day, month, year;
    public:
    void setDate(int,int,int);
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    int  getDate();
    int  getYear();
    int  getDay();
    int  getMonth();
    void showDate();
};
void  Date::setDay(int d){
    day = d;
}
void  Date :: setMonth(int m){
    month = m;
}
void  Date :: setYear(int y){
    year = y;
}
void Date :: setDate(int d, int m, int y){
        day = d;
        month = m;
        year = y;
}

int Date :: getMonth(){
    return month;
}
int Date :: getDay(){
    return day;
}
int  Date :: getYear(){
    return year;
}
void Date :: showDate(){
    cout<<"Date: "<<day<<"/"<<month<<"/"<<year<<endl;
}
int main(){
    Date d1;
    d1.setDate(30, 8, 2024);
    d1.showDate();
    d1.setDay(1);
    d1.setMonth(9);
    d1.setYear(2025);
    d1.showDate();
    cout<<d1.getYear();
}