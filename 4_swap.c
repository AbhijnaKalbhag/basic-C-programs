//4. Write a Program in C to Swap the values of two variables without using any extra variable.

#include<stdio.h>
int main(){
    int a,b;
    printf("enter 2 numbers:\n");
    scanf("%d%d",&a,&b);
    // a=a+b;
    // b=a-b;
    // a=a-b;
    //or ⬇️
    a=a^b;
    b=a^b;
    a=a^b;

    printf("after swapping\na=%d\nb=%d",a,b);
}

//refer : https://www.geeksforgeeks.org/swap-two-numbers-without-using-temporary-variable/