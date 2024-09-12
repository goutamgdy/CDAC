#include<bits/stdc++.h>

using namespace std;


class Calculator
{
    public:
    int num1, num2;
    public:
    void Accept_vlaues();
    void Display_values();
    int Addition();
    int Subtraction();
    int Multiplication();
    float Division();
};

void Calculator :: Accept_vlaues(){
    cout <<"Ente Values of two numbers for you wants to performs calculation: "<<endl;
    cin >> num1 >>num2;

}
void Calculator :: Display_values(){
    cout <<"Num1: "<<num1<<" Num2: "<<num2<<endl;
}

int Calculator :: Addition(){
    return num1 + num2 ;
}

int Calculator :: Subtraction(){
    return num1 - num2;
}

int Calculator :: Multiplication(){
    return num1 * num2;
}

float Calculator :: Division(){
    if(num2 != 0)
    return num1 /num2;
    else
    return 0.0;
}

int main(){
    Calculator calc;
    calc.Accept_vlaues();
    calc.Display_values();
    cout<<"Addition: "<<calc.Addition()<<endl;
    cout<<"Subtraction: "<<calc.Subtraction()<<endl;
    cout<<"Multiplication: "<<calc.Multiplication()<<endl;
    cout<<"Division: "<<(float)calc.Division()<<endl;

}