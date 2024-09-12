#include<stdio.h>
#include<conio.h>

// Accepting elements in 2d array

int main(){
    int a[3][4];
    for(int i =0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("Enter element at position [%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i =0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}