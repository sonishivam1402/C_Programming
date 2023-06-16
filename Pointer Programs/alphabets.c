//Write a program in C to print all the alphabets using a pointer.
#include <stdio.h>
#include <stdlib.h>
int main()
{
char *c;
c = (char*)malloc(sizeof(char));
*c = 'A';
printf("\nAlphabets using a pointer: \n");
while (*c <= 'Z')
{
printf(" %c ", *c);
*c = *c+1;
}
return 0;
}

