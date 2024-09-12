#include<stdio.h>
#include<conio.h>


int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", & num);
    int digits = 0;
    while(num){
        digits += 1;
        num = num / 10;
    }
    printf("Number of digits in entered number: %d", digits);
    return 0;
}