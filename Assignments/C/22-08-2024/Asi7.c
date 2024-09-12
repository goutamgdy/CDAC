#include<stdio.h>
#include<conio.h>

// Table fron 1 to num

int main(){
    int num = 5;
    printf("Enter the value of num: ");
    scanf("%d", &num);
    int i  = 1;
    while(i <= num){
        for(int j = 1;j<=10;j++){
            printf("\n\n\t%d x %d = %d", i, j ,i*j);
        }
        printf("\n-------------------");
        i++;
    }
    return 0;
}
