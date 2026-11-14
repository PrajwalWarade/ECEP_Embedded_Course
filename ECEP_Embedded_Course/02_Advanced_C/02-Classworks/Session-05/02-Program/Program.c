#include<stdio.h>

int main()
{
    // Code
    char ch;
    int iNum1, iNum2;

    printf("Enter the numbers\n");
    scanf("%d %c %d", &iNum1, &ch, &iNum2);

    if(ch == '+')
    {
        printf("Sum of number is: %d\n", iNum1 + iNum2);  
    }

    else if(ch == '-')
    {
        printf("Diff of number is: %d\n", iNum1 - iNum2);  
    }

    else if(ch == '*')
    {
        printf("Mult of number is: %d\n", iNum1 * iNum2);  
    }

    else if(ch == '/')
    {
        printf("Div of number is: %d\n", iNum1 / iNum2);  
    }

    else
    {
        printf("Invalid Operator\n");
    }

    return (0);
}
