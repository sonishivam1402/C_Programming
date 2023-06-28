//C program to print all vowels and consonants characters separately.
#include <stdio.h>

int main()
{
    char s1[25];
    int i;
    int n;
    printf("Enter a string : ");
    scanf("%s",s1);
    n = strlen(s1);
    printf("Vowels \n");
    
    for(i=0;i<=n;i++)
    {
        if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u')
        {
            printf("%c ",s1[i]);
        }
    }
    printf("\n");
    printf("consonants\n");
    
    for(i=0;i<=n;i++)
    {
        if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u')
        {
            printf(" ");
        }
        else
        {
            printf("%c ",s1[i]);
        }
    }
    return 0;
}