//5. Write a Program to Replace all 0’s with 1’s in a Number.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,isNeg=0;
    printf("enter the number:\n");
    scanf("%d",&n);
    if(n<0){
        n=-n;
        isNeg=1;
    }

    int length=snprintf(NULL,0,"%d",n);
    char *s=(char*)malloc((length+1)*sizeof(char));
    
    itoa(n,s,10);

    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='0'){
            s[i]='1';
        }
    }
    n=atoi(s);
    if(isNeg){
        n=-n;
    }
    printf("%d",n);
}