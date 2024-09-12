#include<stdio.h>
#include<conio.h>


// primeNumber between 1-100

int isPrime(int n){
    if(n < 3)return 1;
    for(int i = 2;i<=n/2;i++){
        if(n % i == 0)return 0;
    }
    return 1;
}
int main(){
    printf("Prime numbers between 1 and 100 are: ");
    for(int i = 1;i<=100;i++){
        if(isPrime(i)){
            printf("\n%d", i);
        }
    }
    return 0;
}