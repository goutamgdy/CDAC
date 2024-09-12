#include<stdio.h>
#include<conio.h>


// Fractorial of 1 to 5

int factorial(int num){
    int fact = 1;
    while(num){
        fact *= num;
        num--;
    }
    return fact;
}
int main(){
    int i,n,fact;
    printf("Factorial of numbers from 1 to 5:\n");
    for(i=1;i<=5;i++)
    {
        fact = factorial(i);
        printf("%d = %d\n", i, fact);
        fact = 1;
    }
    return 0;
}