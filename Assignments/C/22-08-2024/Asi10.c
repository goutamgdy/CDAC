#include<stdio.h>
#include<conio.h>

// First Pettern

int main(){
    int m,n;
    printf("M: ");
    scanf("%d", &m);
    printf("N: ");
    scanf("%d", &n);
    for(int i = m;i<=n;i++){
        printf("\n%d", i);
    }
    return 0;
}
