//C Program to Compute Quotient and Remainder
#include<stdio.h>
int main()
{
    int x,y,q,r;
    printf("Enter Two Number :\n");
    scanf("%d\n%d",&x,&y);
    r = x % y;
    q = x / y;
    printf("Quotient = %d and Reaminder = %d",q,r);
    return 0;
}