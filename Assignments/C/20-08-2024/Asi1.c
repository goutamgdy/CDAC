#include<stdio.h>
#include<conio.h>
// positiveNagetiveZero
int main(){
    int n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    if(n == 0){
        printf("n is zero");
    }
    
    if(n < 0){
        printf("n is negative");
    }

    else{
        printf("n is positive number");
    }

    return 0;

}