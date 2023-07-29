//Write a program in C demonstrate the difference between structure and union.
#include <stdio.h>
#include <stdlib.h>
struct s
{
char name[50];
int number;
}S;
union u
{
char name[50];
int number;
}U;
int main()
{
printf("..STRUCTURE..\n");
printf("Enter the name:");
gets(S.name);
printf("Enter the number:");
scanf("%d",&S.number);
printf("Data for structure: \n");
printf("Name:%s\n",S.name);
printf("Number: %d\n",S.number);
printf("\n..UNION..\n");
printf("Enter the name:");
scanf("%s",U.name);
printf("Enter the number:");
scanf("%d",&U.number);
printf("Data for union: \n");
printf("Name: %s\n",U.name);
printf("Number: %d\n",U.number);
return 0;
}
