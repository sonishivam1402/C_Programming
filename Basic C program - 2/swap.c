//Write a c program to swap two numbers without using third variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter num1 : ");
    scanf("%d",&a);
    printf("\nEnter num2 : ");
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping num1 = %d and num2 = %d",a,b);
    return 0;
}