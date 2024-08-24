//20. Write a program to form Pascal Triangle using numbers.
#include<stdio.h>
void printPascal(int row){
    int ncr;
    for(int n=0;n<row;n++){
        for(int sp=0;sp<row-n-1;sp++){
            printf(" ");
        }
        for(int r=0;r<=n;r++){
            if(n==0||r==0){
                ncr=1;
                printf("%d ",ncr);
            }
            else{
                ncr=ncr*(n-r+1)/r;
                printf("%d ",ncr);

            }
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("enter n value:\n");
    scanf("%d",&n);
    printPascal(n);
}