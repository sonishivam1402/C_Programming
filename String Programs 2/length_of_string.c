//Write a program in C to calculate the length of the string using a pointer. 
#include <stdio.h>
int calculateLength(char*);
void main()
{
   char str1[25];
   int l;
   printf(" Input a string : ");
   fgets(str1, sizeof str1, stdin);
   l = calculateLength(str1);
   printf(" The length of the given string %s is: %d ", str1, l-1);
}
int calculateLength(char* ch)
{
   int ctr = 0;
   while (*ch != '\0')
   {
      ctr++;
      ch++;
   }
   return ctr;
}
