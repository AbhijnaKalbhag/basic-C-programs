//16. Write a C Program to find the Maximum and minimum of two numbers without using any loop or condition. 
#include<stdio.h>
#include<math.h>
int max(int a ,int b){
    return (a+b+abs(a-b))/2;
}
int min(int a ,int b){
    return (a+b-abs(a-b))/2;
}

int main(){
    int a,b;
    printf("enter 2 numbers:\n");
    scanf("%d%d",&a,&b);

    printf("maximum = %d\n",max(a,b));
    printf("minimum = %d",min(a,b));
    
}