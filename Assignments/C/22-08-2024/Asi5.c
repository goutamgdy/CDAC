#include<stdio.h>
#include<conio.h>

// Third Pettern
//   1 2 3 4 5
//   1 2 3 4
//   1 2 3
//   1 2
//   1
int main(){
    int n = 5;
    for(int i = 0;i<n;i++){
        int k = 1;
        for(int j =0;j<n - i;j++){
            printf("%d", k++);
        }
        printf("\n");
    }
    return 0;
}
