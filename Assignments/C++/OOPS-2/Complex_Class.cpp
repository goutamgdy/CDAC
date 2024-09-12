#include<iostream>

using namespace std;

class Complex
{   
    private:
        int real, image;
    public:
        Complex();
        Complex(int,int);
        void setter(int,int);
        int getReal();
        int getImage();
        void Display();
};

Complex :: Complex(){
    real = 0;
    image = 0;
}
Complex :: Complex(int real, int image){
    this->real = real;
    this->image = image;
}

void Complex :: setter(int real, int image){
    this->real = real;
    this->image = image;
}

int Complex ::  getReal(){
    return real;
}

int Complex :: getImage(){
    return image;
}

void Complex :: Display(){
    cout<<"\n\n\t"<<real<<"+"<<image<<"i"<<endl;
}

int main(){
    Complex c1(10,7);
    c1.Display();
}