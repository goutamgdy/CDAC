#include<stdio.h>
#include<conio.h>


int main(){
    int a, b;
    printf("Enter values of a and b\n");
    scanf("%d%d", &a,&b);
    printf("Before swaping values of a and b are\na = %d\nb = %d\n",a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("Arter swaping values of a and b are\na = %d\nb = %d\n",a,b);
    return 0;
}