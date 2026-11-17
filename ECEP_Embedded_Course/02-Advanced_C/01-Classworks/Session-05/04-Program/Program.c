#include<stdio.h>

int main()
{
    // Code
    int iNo1;

    scanf("%d", &iNo1);

    if(iNo1 > 0)
    {
        if(iNo1 % 2 == 0)
        {
            printf("The number is Positive and Even \n");
        }
        else
        {
            printf("The number is Positive and Odd \n");
        }
    }

    else if(iNo1 < 0)
    {
        if(iNo1 % 2 == 0)
        {
            printf("The number is Negative and Even \n");
        }
        else
        {
            printf("The number is Negative and Odd \n");
        }
    }

    else
    {
        printf("Invalid Input");
    }

    return (0);
}
