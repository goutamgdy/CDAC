#include<stdio.h>
#include<conio.h>

// Mergeing to arrays

int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,10};
    int arr[10];
    int i,j,k=0;
    for(i=0;i<5;i++)
    {
        arr[k]=arr1[i];
        k++;
    }
    for(i=0;i<5;i++){
        arr[k]=arr2[i];
        k++;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;

}