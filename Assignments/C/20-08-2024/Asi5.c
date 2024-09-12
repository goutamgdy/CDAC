#include<stdio.h>
#include<conio.h>

// isAlpha
int main(){
    char c;
    printf("Enter any charactor:\n\n");
    scanf("%c", &c);
    if((c >= 65 && c <=90) || (c >=97 && c <= 122)){
        printf("Entered charactor is an alphabate");
    }
    else{
        printf("Entered number is not an alphabate");
    }
    return 0;
}