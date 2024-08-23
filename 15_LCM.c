//15. Write a  C program to find the LCM of two numbers.
#include<stdio.h>
void LCM(int a,int b){
    int max =((a>b) ? a:b);
    int lcm=max;
    while((lcm%a!=0) || (lcm%b!=0)){
        lcm+=max;
    }
    printf("%d",lcm);
}
int main(){
    int a,b;
    printf("enetr 2 numbers:\n");
    scanf("%d%d",&a,&b);

    LCM(a,b);
}