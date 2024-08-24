//18. Write a Program to find the area of a circle.
#include<stdio.h>
#include<math.h>

float area(float r){
    return 3.142*pow(r,2);
}
int main(){
    float r;
    printf("enter radius of circle:\n");
    scanf("%f",&r);

    printf("Area of circle = %.2f square units",area(r));
}