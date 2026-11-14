#include<stdio.h>

int main()
{
    // Code
    int iNum1, iNum2, iNum3;

    printf("Enter the numbers /n");
    scanf("%d %d %d", &iNum1, &iNum2, &iNum3);

    if(iNum1 > iNum2 && iNum1 > iNum3)
    {
        printf("Maximum number is: %d\n", iNum1);  
    }

    else if(iNum2 > iNum1 && iNum2 > iNum3)
    {
        printf("Maximum number is: %d\n", iNum2);  
    }

    else
    {
        printf("Maximum number is: %d\n", iNum3);
    }

    return (0);
}
