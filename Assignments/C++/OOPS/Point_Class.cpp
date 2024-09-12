#include<iostream>

using namespace std;


class Point
{
    private:
    int x_axis, y_axis;
    public:
    void setPoint(int, int);
    void showPoint();
};

void Point :: setPoint(int x, int y){
    x_axis = x;
    y_axis = y;
}
void Point :: showPoint(){
    cout <<"["<<x_axis<<","<<y_axis<<"]"<<endl;
}

int main(){
    Point p1;
    p1.setPoint(10,20);
    p1.showPoint();
}