#include<stdio.h>
#include<conio.h>


int main(){
    int num;
    printf("Enter the number u want to print the table of: ");
    scanf("%d", &num);

    for(int i = 1;i<=10;i++){
        printf("\n%d x %d = %d", num, i, num * i);
    }
    return 0;
}