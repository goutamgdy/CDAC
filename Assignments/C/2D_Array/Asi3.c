#include<stdio.h>
#include<conio.h>

// rowSum, digonalSum, transpose


int main(){
    int arr[3][3] = {{10,20,1}, {22,32,2}, {50,5,3}};
    for(int i = 0;i<3;i++){
        int sum = 0;
        for(int j = 0;j<3;j++){
            sum += arr[i][j];
        }
        printf("\n\nSum of the %d row is %d", i+ 1, sum);
    }
    printf("\n\n-------------------");

    int sum = 0;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(i == j){
                sum += arr[i][j];
               
            }
        }
    }
    printf("\n\nSum of the digonal element is %d",sum);
    printf("\n\n-------------------");

    
    return 0;

}