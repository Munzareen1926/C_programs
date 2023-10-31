#include<stdio.h>
#include<string.h>
struct teacher{
int salary;
int lecture;
char name[50];
};
int main(){
struct teacher yuza;{
yuza.salary=5000;
yuza.lecture=10;
printf("\n salary=%d",yuza.salary);
printf("\n lecture=%d",yuza.lecture);
printf("\n name:");
char temp[50];
scanf("%s",&temp);
strcpy("yuza.name",temp);
}
}