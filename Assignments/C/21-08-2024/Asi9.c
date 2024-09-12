#include<stdio.h>
#include<conio.h>

// powerOfTheNumber

int main(){
    int num, index;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &index);
    int power = 1;
    while (index)
    {
       power *= num;
       index--;
    }
    printf("\nPower: %d", power);
    return 0;
}