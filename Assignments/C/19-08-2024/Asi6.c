#include<stdio.h>
#include<conio.h>


int main(){
    int principle;
    int rate;
    int time;
    float simpleIntrest;
    printf("Enter the principle amount: ");
    scanf("%d", &principle);
    printf("Enter the rate of intrest: ");
    scanf("%d", &rate);
    printf("Enter the duraton: ");
    scanf("%d", &time);
    simpleIntrest = (principle * rate * time) / 100;
    printf("Simple interest for given values is: %.2f", simpleIntrest);
    return 0;
}