//Write a 'C' program to accept 'n' numbers from the user and sort them in ascending order using Dynamic Memory Allocation.
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int *a,n,i,j,t;
 printf("\nEnter the number of integers: "); scanf("%d",&n);
 a= (int *)malloc(n * sizeof(int));
 printf("\nEnter the %d numbers to be sorted in ascending order: ",n);
 for (i=0;i<=n-1;i++)
 {
    scanf("%d",(a+i));
 }
 for (i=0;i<n;i++)
 {
   for (j=0;j<=i;j++)
   {
      if (*(a+i)< *(a+j))
         {
           t= *(a+i);
            *(a+i) = *(a+j);
            *(a+j) = t;
         }
    }
 }
  printf("\nAfter sorting in ascending order: "); for (i=0;i<n;i++)
  printf("\n%d", *(a+i));
  return 0;
}