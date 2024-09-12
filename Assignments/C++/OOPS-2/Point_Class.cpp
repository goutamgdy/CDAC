#include<iostream>

using namespace std;

class Point
{
    public:
        int x,y;
    public:
        Point();
        Point(int,int);
        void Display();
};

Point :: Point(){
    x = 0;
    y = 0;
}

Point :: Point(int x, int y){
    this->x = x;
    this->y = y;
}
void Point :: Display(){
    cout<<"\n\n\t"<<"X_Axis: "<<x<<" Y_Axis: "<<y<<endl;
}

int main(){
    Point p1;
    Point p2(10, 12);
    p1.Display();
    p2.Display();
}