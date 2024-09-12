#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

template <class T>
void Swap(T &num1, T &num2){
    T temp = num1;
    num1 = num2;
    num2 = temp;
}

int main(){
    int num1 = 10, num2 = 20;
    Swap(num1, num2);
    cout<<"\n\n\tDone";
    char chr1 = 'A';
    char chr2 = 'B';
    Swap(chr1, chr2);
    cout<<"\n\n\tDone";
}
