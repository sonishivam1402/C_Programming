//Write a program in C to copy string without using strcpy() function by creating own function which uses pointers. 

#include <stdio.h>
int main()
{
    char s1[] = "Shivam Soni", s2[100], i;
    printf("string  : %s\n", s1);
    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("copy string : %s", s2);
    return 0;
}
