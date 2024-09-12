#include<stdio.h>
#include<conio.h>


int main(){
    int math, physics, chemistry, hindi, english;
    printf("Enter the the marks of Maths:\n");
    scanf("%d", &math);
    printf("Enter the the marks of Physics:\n");
    scanf("%d", &physics);
    printf("Enter the the marks of Chemistry:\n");
    scanf("%d", &chemistry);
    printf("Enter the the marks of Hindi:\n");
    scanf("%d", &hindi);
    printf("Enter the the marks of English:\n");
    scanf("%d", &english);
    float average;
    average = (math + physics + chemistry + hindi + english) / 5;
    printf("The average marks is: %.2f", average);
    return 0;
}