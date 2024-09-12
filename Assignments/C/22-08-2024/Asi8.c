#include<stdio.h>
#include<conio.h>

// Odd Numbers

int main(){
    int num,count;
    printf("Enter the range: ");
    scanf("%d", &num);
    for(int i = 1;i<=num;i++){
        if(i % 2 != 0){
            printf("%d ", i);
            count++;
        }
    }
    printf("\nCount of odd numbers for given range is: %d", count);
    return 0;
}
