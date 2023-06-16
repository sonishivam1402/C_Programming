//Write a C function to input a number and generate Fibonacci Series. (Function with no arguments and no return value).
#include<stdio.h>

void generateFibonacci();

int main()
{
    generateFibonacci();
    return 0;
}

void generateFibonacci()
{
    int i, n;
  int t1 = 0, t2 = 1;
  int nextTerm = t1 + t2;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", t1, t2);
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
}