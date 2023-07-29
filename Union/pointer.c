//Write a program in C to show a pointer to union.
#include <stdio.h>
union empAdd
{
char *ename;
char stname[20];
int pincode;
};
int main()
{
printf("\n\n Pointer : Show a pointer to union :\n");
union empAdd employee,*pt;
employee.ename="Shivam Soni";
pt=&employee;
printf(" %s %s\n\n",pt->ename,(*pt).ename);
return 0;
}