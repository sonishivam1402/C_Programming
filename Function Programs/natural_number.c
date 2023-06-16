//Write a C Function to print all natural numbers between start to end. (Function with arguments and no return value).
#include <stdio.h>
void printNaturalNumbers(int start, int end);
int main()
{
int s, e;
printf("Enter lower num: ");
scanf("%d", &s);
printf("Enter upper num: ");
scanf("%d", &e);
printNaturalNumbers(s, e);
return 0;
}
void printNaturalNumbers(int start, int end)
{
printf("Natural numbers from %d to %d are: \n", start, end);
while(start <= end)
{
printf("%d, ", start);
start++;
}
}