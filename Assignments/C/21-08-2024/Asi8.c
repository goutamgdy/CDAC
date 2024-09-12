#include<stdio.h>
#include<conio.h>

// fibonacciSeries
int main(){
    int n;
    printf("Enter the number of terms u want to print: ");
    scanf("%d", &n);
    int t1  = 0, t2 = 1;
    printf("%d %d ", t1, t2);
    for (int i = 2; i < n; i++)
    {
        int next = t1 + t2;
        printf("%d ", next);
        t1 = t2;
        t2 = next;
    }
        return 0;

}