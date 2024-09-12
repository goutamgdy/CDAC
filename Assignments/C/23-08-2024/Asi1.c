#include<stdio.h>
#include<string.h>

// Average and sum of array elements

int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int sum = 0, avg = 0;
    int i;
    for (i = 0; i < 8; i++) {
        sum += arr[i];
        avg = sum / 8;
    }
    printf("Average: %d\nSum: %d", avg, sum);
    return 0;
}