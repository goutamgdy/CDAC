#include<stdio.h>
#include<conio.h>
// oddEven
int main(){
    int n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    if(n%2 == 0){
        printf("n is an even number");
    }
    
    if(n < 0){
        printf("n is odd number");
    }

    return 0;

}