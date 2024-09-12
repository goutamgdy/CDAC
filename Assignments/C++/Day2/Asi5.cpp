#include<bits/stdc++.h>

using namespace std;

// Defalut arguments

void pro(int num1 = 1,int num2 = 1,int num3 = 1){
    int product =  num1 * num2 * num3;
    cout<<"Prodct of num1,num2 and num3 is: "<<product<<endl;
}
int main(){
    int num1, num2, num3;
    cout<<"Enter valus of num1, num2 and num3: "<<endl;
    cin>>num1>>num2>>num3;
    cout<<endl;
    pro(num1);
    pro(num1,num2);
    pro(num1,num2,num3);
    return 0;
};