//Write a program in C to print the elements of an array in reverse order.
#include <stdio.h> 
#include <stdlib.h>
#define n 4
int main()
{
int a[n], i, *p;
printf("\nEnter %d integer numbers: \n",n);
for (i=0;i<n;i++)
scanf("%d", &a[i]);
p = &a[n-1];
printf("\nElements of array in reverse order: \n"); for (i=0;i<n;i++)
printf("%d\n", *p--);
return 0;
}
