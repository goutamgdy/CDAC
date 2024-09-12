#include<stdio.h>
#include<conio.h>

// Fourth Pettern
    // 1 1 1 1 
    // 2 2 2
    // 3 3
    // 4
int main(){
    int n = 4;
    int k = 1;
    for(int i = 0;i<n;i++){
        for(int j =0;j<n - i;j++){
            printf("%d", k);
        }
        k++;
        printf("\n");
    }
    return 0;
}
