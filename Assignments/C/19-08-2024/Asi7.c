#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("Enter a four digit number:\n");
    scanf("%d", &n);
    int sum = 0;
    while(n){
        int res = n % 10;
        sum += res;
        n = n/10;
    }
    printf("The sum of digits for given n is: %d", sum);
    return 0;
}