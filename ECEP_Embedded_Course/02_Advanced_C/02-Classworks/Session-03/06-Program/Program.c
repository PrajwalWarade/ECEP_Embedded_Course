#include<stdio.h>

int main()
{
    // Code
    int iNum1 = 9;
    int iNum2 = 7;
    int iNum3 = 2;


    if((iNum1 = 0) && (iNum2 = 1) || (iNum3 = 0))
    {
        printf("True %d %d %d\n", iNum1, iNum2, iNum3);
    }

    else
    {
        printf("False %d %d %d\n", iNum1, iNum2, iNum3);
    }

    return (0);
}
