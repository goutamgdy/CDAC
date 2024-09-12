#include<bits/stdc++.h>
using namespace std;

// Swaping using reference
void swap(int &num1, int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
int main(){
    int num1, num2;
    cout<<"Enter values of num1 and num2:"<<endl;
    cin>>num1>>num2;
    cout<<endl;
    cout<<"Before swaping num1: "<<num1<<" num2: "<<num2<<endl;
    swap(num1,num2);
    cout<<"After swaping num1: "<<num1<<" num2: "<<num2<<endl;

}