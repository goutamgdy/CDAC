#include<bits/stdc++.h>

using namespace std;

// add and product
int add(int num1, int num2){
    return num1 + num2;
}
int prd(int num1, int num2){
    return num1 * num2;
}
int main(){
    int num1, num2;
    cout<<"Enter values of num1 and num2:"<<endl;
    cin>>num1>>num2;
    cout<<endl;
    int addition = add(num1, num2);
    int product = prd(num1, num2);
    cout<<"Addition is: "<<addition<<endl<<"Product is: "<<product<<endl;
    return 0;
}
