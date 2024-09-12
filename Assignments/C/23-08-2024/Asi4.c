#include<stdio.h>
#include<conio.h>


// Accepting array elements and finding max
int main(){
    int arr[10];
    printf("Enter elements of array: ");
    for(int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i = 1;i<10;i++){
        if(arr[i] > max)
        max = arr[i];
    }
    printf("Maximum element in array is: %d",max);
    return 0;
}