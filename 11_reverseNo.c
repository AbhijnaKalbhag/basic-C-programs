//11. Write a Program to reverse a number.
#include<stdio.h>
#include<math.h>
void reverse(int n){
    int revn=0;
    int dig;
    while(n>0){
        dig=n%10;
        revn=revn*10+dig;
        n=n/10;
    }
    printf("%d",revn);
}

int main(){
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);

    reverse(n);
}