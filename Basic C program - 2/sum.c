//Write a c program to find the sum of first n natural numbers.
#include<stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum of First %d natural number is = %d",n,sum);
    return 0;

}