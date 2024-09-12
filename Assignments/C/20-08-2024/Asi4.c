#include<stdio.h>
#include<conio.h>


// smallestInThree
int main(){
    int num1, num2, num3;
    printf("Enter the values of num1, num2 and num3\n");
    scanf("%d\n\n%d\n\n%d", &num1, &num2, &num3);
    if(num1 < num2 && num1 < num3){
        printf("Smallest number is: %d", num1);
        
    }
    else if(num2 < num1 && num2 < num3){
        printf("Smaller number is: %d", num2);
        
    }
    else{
        printf("Smaller number is: %d", num3);
    }
        
    return 0;
}
