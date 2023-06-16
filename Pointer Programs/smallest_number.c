//Write a C program to find the smallest number using pointer. Program Based of Functions & Pointers
#include <stdio.h>
#include <stdlib.h>
int main()
{
int a[15], n, i, s, *p;
printf("\nEnter the number of integers: "); scanf("%d",&n);
printf("\nEnter the %d numbers: \n",n); for (i=0;i<n;i++)
{
scanf("%d", &a[i]); p++;
}
p = &a[0];
s = a[0];
for (i=0;i<n;i++)
{
if (s > (*p)) s = *p;
p++;
}
printf("\nThe smallest number is: %d",s);
return 0;
}