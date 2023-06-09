//C Program to Find Factorial of a Number
#include<stdio.h>
int main()
{
    int a,b=1;
    printf("Enter Any Number : ");
    scanf("%d",&a);
    while(a>=1)
    {
        b = b * a; 
        a--;
    }
    printf("Factorial of Number entered is  : %d",b);
    return 0;
}