#include<bits/stdc++.h>
using namespace std;

class Date
{
    private:
    int day, month, year;
    public:
    void setDate(int,int,int);
    void showDate();
    
};
void Date :: setDate(int d, int m, int y){
        day = d;
        month = m;
        year = y;
 }
void Date :: showDate(){
    cout<<"Date: "<<day<<"/"<<month<<"/"<<year;
}
int main(){
    Date d1;
    d1.setDate(30, 8, 2024);
    d1.showDate();
}