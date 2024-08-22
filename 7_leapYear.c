//7.  Write a Program to check if the \n is a leap \n or not.
#include<stdio.h>
#include<stdlib.h>

void leap(int n){
    //if a \n is multiple of 400 - is a leap \n
    if(n%400==0){
        printf("%d is a leap \n",n); 
    }

    //if \n is multiple of 100 -  not a leap \n
    else if(n%100==0){
        printf("%d is not a leap \n",n); 
    }

    //if a \n is multiple of 4 - is a leap \n
    else if(n%4==0){
        printf("%d is a leap \n",n); 
    }
    
    //else not a leap \n
    else{
        printf("%d is not a leap \n",n);  
    }
}

int main(){
     leap(2004);
     leap(1998);
     leap(1963);
     leap(1973);  
}