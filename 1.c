//1. Find the largest number among the three numbers.

#include<stdio.h>

int main(){

    int x,y,z;
    printf("enter 3 numbers:\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x>=y && x>=z){
        printf(" %d is the greatest",x);
    }
    else if(y>=x && y>=z){
        printf(" %d is the greatest",y);
    }
    else{
        printf(" %d is the greatest",z);
    }

    return 0;
}