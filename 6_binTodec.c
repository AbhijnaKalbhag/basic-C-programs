// 6. Write a Program to convert the binary number into a decimal number and vice versa.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

    int n,bin=0,r,cnt=0;
    printf("enter the number:\n");
    scanf("%d",&n);
    while(n>0){
        r=n%2;
        bin=r*pow(10,cnt)+bin;
        n=n/2;
        cnt++;
    }
    printf("in binary = %d\n",bin);
    int dec=0;
    cnt=0;
    while(bin>0){
        r=bin%10;
        dec=dec+(r*pow(2,cnt));
        cnt++;
        bin=bin/10;
    }
    printf("in decimal = %d",dec);
}