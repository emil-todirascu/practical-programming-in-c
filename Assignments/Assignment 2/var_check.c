#include <stdio.h>

int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);

    if ('a' <= a && a <= 'z')
    {
        printf("The character is a lowercase letter\n");
    }
    else if ('A' <= a && a <= 'Z')
    {
        printf("The character is an uppercase letter\n");
    }
    else if ('0' <= a && a <= '9')
    {
        printf("The character is a digit\n");
    }
    else if (a == ' ' || a == '\t' || a == '\n')
    {
        printf("The character is a whitespace character\n");
    }
    else
    {
        printf("The character is a special character\n");
    }

    return 0;
}