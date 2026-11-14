#include<stdio.h>

int main()
{
    // Code
    char ch;

    printf("Enter the character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("UpperCase\n");
    }

    else if(ch >= 'a' && ch <= 'z')
    {
        printf("LowerCase\n");
    }

    else if(ch >= '0' && ch <= '9')
    {
        printf("Digit\n");
    }

    else
    {
        printf("Special Character\n");
    }

    return (0);
}
