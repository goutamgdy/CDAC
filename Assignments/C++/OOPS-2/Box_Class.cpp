#include<iostream>
using namespace std;

class Box
{
    private:
    int height, width, depth;
    public:
    Box();
    Box(int, int, int);
    void setHeight(int);
    void setWidth(int);
    void setDepth(int); 
    void Display();
};

Box :: Box(){
    height = 0;
    width = 0;
    depth = 0;
}

Box :: Box(int height, int width, int depth){
    this->height = height;
    this->width = width;
    this->depth = depth;
}
void Box :: setWidth(int w){
       width = w;
}

void Box :: setDepth(int d){
       depth = d;
}

void Box :: setHeight(int h){
       height = h;
}

void Box :: Display(){
    cout<<"Height: "<<height<<" Width: "<<width<<" Depth: "<<depth<<endl;
}
int main(){
    Box b1;
    Box b2(10,12,13);
    b1.setHeight(12);
    b1.setWidth(12);
    b1.setDepth(12);
    b1.Display();
    b2.Display();
}