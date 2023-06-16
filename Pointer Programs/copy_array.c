//Write a C program to copy one array to another using pointers.
#include <stdio.h>
#include <stdlib.h>
#define max 50
void display_a(int *a, int n)
{
int i;
for (i=0;i<=n; i++)
{
printf("%d ", *(a+i));
}
}
int main()
{
int a1[max], a2[max], n, i;
int *p1=a1, *p2=a2, *last_a= a1+9;
printf("\nEnter size of array: "); scanf("%d", &n);
printf("\nEnter array you want to copy: \n"); for (i=0; i<=n;i++)
{
scanf("%d", p1+i);
}
while (p1 <= last_a)
{
*p2 = *p1; p1++; p2++;
}
printf("\nArray 1: "); display_a(a1,n);
printf("\nArray 2 (the copied array): "); display_a(a2,n);
return 0;
}