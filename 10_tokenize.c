// Count unique year from a given sentence , the date has the format dd-mm-yyyy
// Ex : “Hello my name is Abhijna I started my college on 06-07-2021 and I will finish my college on
// 01-07-2024 and my internship would start from 01-01-2024”

#include<stdio.h>
#include<string.h>
int isunique(int year,int arr[],int j){
   if(j==0){
    return 1;
   }
   else{
    for(int i=0;i<j;i++){
        if(year==arr[i]){
            return 0;
        }
       
    }
    return 1;
   }
}
void countYear(char *s){
    int arr[1000],j=0;
    char *token=strtok(s," ");
    while(token!=NULL){
       char nstr[100];
       strcpy(nstr,token);
       int year;
       if(strlen(nstr)>=10 && nstr[5]=='-'&& nstr[2]=='-'){
           year=atoi(nstr+6);
           if(isunique(year,arr,j)){
            arr[j]=year;
            j++;
           }
       }
       token=strtok(NULL," ");
    }
    printf("%d",j);
}

int main(){
    char str[1000]="Hello my name is Abhijna I started my college on 06-07-2021 and I will finish my college on 01-07-2023 and my internship would start from 01-01-2024";

    countYear(str);
}