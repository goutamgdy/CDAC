#include<stdio.h>
#include<conio.h>

int main(){
    int start, end;
    printf("Start: ");
    scanf("%d", &start);
    printf("End: ");
    scanf("%d", &end);
    // if(start == end){
    //     printf("%d\n", start);
    // }
    if(start < end){
        while(start != end){
            printf("%d\n", start++);
        }
    }
    else{
        while(start != end){
            printf("%d\n", start--);
        }
    }
    return 0;
}
