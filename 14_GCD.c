//14. Write a  C program to find the GCD of two numbers.
#include<stdio.h>

void GCD(int a,int b){
    int min=((a>b) ? b : a);
    int ans;
    while(min>0){
        if(a%min==0 && b%min==0){
            ans=min;
            break;
        }
        min--;
    }
    printf("%d",ans);
}
int main(){
    int a,b;
    printf("enetr 2 numbers:\n");
    scanf("%d%d",&a,&b);

    GCD(a,b);
}