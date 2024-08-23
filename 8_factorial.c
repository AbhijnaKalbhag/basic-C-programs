//8. Write a program to Factorial of a Number.
#include<stdio.h>

int factorial(int n){
    if(n==0){
        return 1;
    }  
    else{
        return n*factorial(n-1);
    }
}

int main(){
   int n;
    printf("enter the number:\n");
    scanf("%d",&n);

    printf("factorial of %d = %d",n,factorial(n));
}