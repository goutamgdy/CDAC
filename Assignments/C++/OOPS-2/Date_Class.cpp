#include <iostream>

using namespace std;

class Date
{
    private:
        int day, month, year;
    public:
        Date();
        Date(int, int, int);
        void DisplayDate();
};

Date :: Date(){
    day = 1;
    month = 1;
    year = 2014;
}

Date :: Date(int day,int month,int year){
    this->day = day;
    this->month = month;
    this->year = year;
}

void Date :: DisplayDate(){
    cout <<"\n\n\t"<< day <<"/" << month <<"/" << year;
}


int main(){
    Date d1;
    Date d2(2, 9, 2024);
    d1.DisplayDate();
    d2.DisplayDate();
}