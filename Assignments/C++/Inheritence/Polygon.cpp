#include<iostream>
using namespace std;

class Polygon
{
    public:
        virtual double CalcArea() = 0;
        virtual double CalcPeri() = 0;
};

class Circle : public Polygon
{
    int radious;
    public:
        Circle();
        Circle(int);
        double CalcArea();
        double CalcPeri();
};

Circle :: Circle(){
    radious = 0;
}

Circle :: Circle(int r){
    radious = r;
}

double Circle :: CalcArea(){
    return 3.14 * radious * radious;
}

double Circle :: CalcPeri(){
    return 2 * 3.14 * radious;
}

class Ranctangle : public Polygon
{
    int len, brd;
    public:
        Ranctangle();
        Ranctangle(int, int);
        double CalcArea();
        double CalcPeri();
};
Ranctangle :: Ranctangle(){
    len = 0;
    brd = 0;
}
Ranctangle :: Ranctangle(int l, int b){
    len = l;
    brd = b;
}

double Ranctangle :: CalcArea(){
    return len * brd;
}

double Ranctangle :: CalcPeri(){
    return 2 * (len + brd);
}

class Square : public Ranctangle
{
    int s;
    public:
        Square();
        Square(int);
        double CalcArea();
        double CalcPeri();
};

Square :: Square(){
    s = 0;
}
Square :: Square(int s):Ranctangle(s,s){
    this->s = s;
}

double Square :: CalcArea(){
    return s * s;
}
double Square :: CalcPeri(){
    return 4 * s;
}

int main(){
    Polygon *ptr = new Circle(5);
    cout<<ptr->CalcArea()<<" "<<ptr->CalcPeri();
    return 0;
}