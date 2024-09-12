#include<iostream>
using namespace std;

class Box
{
    private:
    int height, width, depth;
    public:
    void setHeight(int);
    void setWidth(int);
    void setDepth(int); 
    void showDetaile();
};
void Box :: setWidth(int w){
       width = w;
}

void Box :: setDepth(int d){
       depth = d;
}

void Box :: setHeight(int h){
       height = h;
}

void Box ::showDetaile(){
    cout<<"Height: "<<height<<" Width: "<<width<<" Depth: "<<depth<<endl;
}
int main(){
    Box b1;
    b1.setHeight(12);
    b1.setWidth(12);
    b1.setDepth(12);
    b1.showDetaile();
}