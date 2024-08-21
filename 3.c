//3. Write a C program to calculate Compound Interest.
//CI =amount-amount*(1+r/100)^t

#include<stdio.h>
#include<math.h>

int main(){
    float p,r,t;
    printf("enter principle amount:\n");
    scanf("%f",&p);
    printf("enter rate of ineterst:\n");
    scanf("%f",&r);
    printf("enter time period:\n");
    scanf("%f",&t);
     
    float amount;
    amount=p*(pow(1+(r/100),t));
    printf("Compound interst = %f",amount-p);
}