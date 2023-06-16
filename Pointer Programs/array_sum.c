//Write a program in C to find array sum of array elements using Dynamic Memory Allocation. (Use functions & pointers).
#include <stdio.h>
#include <stdlib.h>
int main()
{
int *p, n, i, sum;
printf("\nEnter the number of integers: "); scanf("%d",&n);
p = (int*)malloc(n * sizeof(int));
printf("\nEnter the %d elements: \n",n); for (i=0; i<n;i++)
{
scanf("%d", (p+i));
}
printf("\nEntered array elements are: \n"); for (i=0; i<n; i++)
{
printf("%d ", *(p+i));
}
sum = 0;
for (i=0; i<n;i++) {
sum += *(p+i); }
printf("\nThe sum of the elements is: %d",sum); free(p);
return 0;
}