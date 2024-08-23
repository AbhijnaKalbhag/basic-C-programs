//12. Check whether a number is a palindrome.
#include<stdio.h>
#include<math.h>
int reverse(int n){
    int revn=0;
    int dig;
    while(n>0){
        dig=n%10;
        revn=revn*10+dig;
        n=n/10;
    }
    return revn;
}

void palindrome(int n){
    if(reverse(n)!=n){
        printf("not a palindrome");
    }
    else{
        printf("is a palindrome");
    }
}
int main(){
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    palindrome(n);
}