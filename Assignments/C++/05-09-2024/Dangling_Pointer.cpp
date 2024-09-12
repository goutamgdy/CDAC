#define _CRT_SEURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main(){
    int *ptr=(int*)malloc(sizeof(int));
    // int a = 560;
    // ptr=&a;
    cout<<*ptr<<endl;
    free(ptr);
    cout<<ptr<<endl;
    return 0;
}