
#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#define PI 3.14


// areaOfShape

int main(){
    int choice;
    int redius ,length, breadth, side;
    float area;
    printf("\n\n\t\tMAIN MENU");
    printf("\n\t\t--------------------");
    
    printf("\n\n\t\t1:: Square");
    printf("\n\n\t\t2:: Rectangle");
    printf("\n\n\t\t3:: Circle");
    printf("\n\t\t--------------------");
    printf("\n\n\t\tEnter your choice: ");
    scanf("\n\n\t\t%d", &choice);
    switch (choice)
    {
    case 1 :
        
        printf("\n\n\t\tEnter the side of square: ");
        scanf("%d", side);
        area  = side*side*side*side;
        printf("\n\n\t\tThe area of Square is: %.2f", area);
        break;
    

    case 2 :
        
        printf("\n\n\t\tEnter the values of length: ");
        scanf("%d", &length);
        printf("\n\n\t\tEnter the values of breadth: ");
        scanf("%d", &breadth);
        area = length * breadth;
        printf("\n\n\t\tThe area of Square is: %d", area);
        break;
    case 3 :
        
        printf("\n\n\t\tEnter the values of redius: ");
        scanf("%d", &redius);
        area = (redius * redius )* PI;
        printf("\n\n\t\tThe area of Square is: %.2f", area);
        break;
    default:
        printf("\n\n\t\tInvalid choice");
        break;
    }
}