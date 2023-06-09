//C Program to Display Fibonacci Sequence
//The Fibonacci sequence is a sequence where the next term is the sum of the previous two terms. 
//The first two terms of the Fibonacci sequence are 0 followed by 1.
#include <stdio.h>
int main() {

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
  return 0;
}