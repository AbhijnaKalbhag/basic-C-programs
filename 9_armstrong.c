//9. Write a Program to Check if a number is an Armstrong number or not.
#include<stdio.h>
#include<math.h>
int len(int a){
    int cnt=0;
    while(a>0){
        cnt++;
        a=a/10;
    }
    return cnt;
}
void armstrong(int a){
    int sum=0,dig;
    int n=len(a);
     int x=a;
    while(x>0){
        dig=x%10;
        sum=sum+pow(dig,n);
        x=x/10;

    }
    if(sum==a){
        printf("%d is a armstrong number",a);
    }
    else{
        printf("%d is not a armstrong number",a);
    }
}
int main(){
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);

    armstrong(n);
}