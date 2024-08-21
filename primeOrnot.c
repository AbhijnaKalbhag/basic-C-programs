// 2. Write a Program to check whether a number is prime or not.
#include<stdio.h>
#include<math.h>

int main(){
    // a number is prime if it is only divisible by 1 and itself
    //we can calculate total no of factors of the numbr and if its>2 that means its not prime
    //otherwise normal loop till root n

    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            printf("%d is not prime",n);
            return 0;
        }
    }
    printf("%d is prime",n);
    return 0;
}