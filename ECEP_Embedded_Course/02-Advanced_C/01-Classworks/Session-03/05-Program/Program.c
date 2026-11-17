#include<stdio.h>

int main()
{
    // Code
    char ch;

    scanf("%c", &ch);


    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Character is UpperCase\n");
    }

    else
    {
        printf("Character is LowerCase\n");
    }

    return (0);
}
