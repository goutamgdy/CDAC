#include<stdio.h>
#include<conio.h>

// last Pettern 
/*
    1
    2 3
    4 5 6
    7 8 9 10c;s
    

*/

int main(){
    int n = 4, k =1;
    for(int i = 0;i<n;i++){
        for(int j =0;j<i+1;j++){
            printf("%d ", k++);
        }
        printf("\n");
    }
    return 0;
}
