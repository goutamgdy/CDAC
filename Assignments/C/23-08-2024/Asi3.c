#include<stdio.h>
#include<conio.h> 

int main(){
    int arr1[5] = {10,20,30,40,50};
    int arr2[5] = {1,2,3,4,5};
    int arr[5];
    for(int i =0;i<5;i++){
        arr[i] = arr1[i] + arr2[i];
    }
    for(int i =0;i<5;i++){  
        printf("%d ",arr[i]);
    }
    return 0;
}