#include<stdio.h>
#include<string.h>
struct employee{
int salary;
int id;
char name[50];
};
void main()
{
struct employee yusra;
yusra.salary=50000;
yusra.id=50;
printf("\n salary=%d",yusra.salary);
printf("\n id=%d",yusra.id);
printf("\n name:");
char temp[50];
scanf("%s",&temp);
strcpy("yuza.name",temp);
}



