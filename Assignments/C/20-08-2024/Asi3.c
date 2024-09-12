#include<stdio.h>
#include<conio.h>


// smallerBigger
int main(){
    int num1, num2;
    printf("enter the values of num1 and num2\n");
    scanf("%d\n%d", &num1, &num2);
    if(num1 > num2){
        printf("Greater number is: %d", num1);
        printf("Smaller number is: %d", num1);
    }
    else{
        printf("Greater number is: %d", num2);
        printf("Smaller number is: %d", num1);
    }
    return 0;
}
