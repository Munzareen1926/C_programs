#include<stdio.h>
void main(){
    int n,i;
       int array[5]={1,2,3,4,6};~
    printf("enter the no:");
    scanf("%d",&n);
 
   
    for(i=0;i<5;i++){
        if(array[i]==n){
            printf("element found:");
        }
        if(i==4 && array[i]!=n){
            printf("element not found:");
        }
    }
}