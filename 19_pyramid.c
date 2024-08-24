//19.  Write a Program to create a pyramid pattern using C.
#include<stdio.h>
void printPyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<2*n;j++){
            if(j<(n-i)){
                printf(" ");
            }
            else if(j>(n+i)){
                printf(" ");
            }
            else{
                printf("*");
            }
            
           
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("enter n value:\n");
    scanf("%d",&n);
    printPyramid(n);
}