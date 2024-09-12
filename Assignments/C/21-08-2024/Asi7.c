#include<stdio.h>
#include<conio.h>

// factorialNumber
int main(){
    int num;
    printf("Enter the number u want to find the factorial of: ");
    scanf("%d", &num);
    int  fact = 1;
    while(num){
        fact *= num;
        num--;
    }
    printf("\nFactorial of entered number is: %d", fact);
    return 0;
}
