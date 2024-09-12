#include<stdio.h>
#include<conio.h>


int main(){
    int a, b;
    printf("Enter the values of a and b\n");
    scanf("%d\n%d", &a,&b);
    printf("Before Swaping values of a and be is :\na = %d\nb = %d\n", a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swaping values of a and be is :\na = %d\nb = %d", a,b);
    return 0;
}