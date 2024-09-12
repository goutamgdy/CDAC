#include<bits/stdc++.h>

using namespace std;

// Function overloading

void add(int num1, int num2){
    int sum = num1 + num2;
    cout<<"Sum: "<<sum<<endl;
    
}
void add(int num1, float num2){
    float sum = num1 + num2;
    cout<<"Sum: "<<sum<<endl;
}
void add(int num1, float num2, float num3){
    int sum = num1 + num2 + num3;
    cout<<"Sum "<<sum;
}
int main(){
    add(3,4);
    add(5,10.5);
    add(4, 10.5,5.5);
    return 0;
};