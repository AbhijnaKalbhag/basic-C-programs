//13. Write a C Program to check if two numbers are equal without using the bitwise operator.
#include<stdio.h>

int main(){
    int a,b;
    printf("enetr 2 numbers:\n");
    scanf("%d%d",&a,&b);
    if(a^b!=0){
        printf("equal");
    }
    else{
        printf("not equal");
    }
}