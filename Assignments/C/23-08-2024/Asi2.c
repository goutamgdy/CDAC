#include<stdio.h>
#include<conio.h>

// Number of occurences
int main(){
    int arr[10] = {5,1,3,4,1,6,7,4,3,1};
    int key;
    printf("Enter the number u want to search in this array: ");
    scanf("%d",&key);
    int count = 0;
    for(int i = 0; i < 10; i++){
        if(arr[i] == key){
            count++;
        }
    }
    printf("Number %d occurs %d times in the array",key,count);
    return 0;
    
}