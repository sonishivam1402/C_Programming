//Write a C program to copy one string into another string using pointers.
#include<stdio.h>
void copy_string(char*, char*);
int main()
{
    char source[100], target[100];
    printf("Enter source string\n");
    gets(source);
    copy_string(target, source);
    printf("Copy string is \"%s\"\n", target);
    return 0;
}
    void copy_string(char *target, char *source)
{
    while(*source)
    {
        *target = *source;
        source++;
        target++;
    }
    *target = '\0';
}
