//C Program to Display Characters from A to Z Using Loop
#include <stdio.h>
int main() 
{
    int i;
    printf("Character froms A to Z are : \n");
    for(i=65;i<=90;i++)
    {
        printf("%c  ",i); // for horizontal space we can use \t  also.
    }
    return 0;
}