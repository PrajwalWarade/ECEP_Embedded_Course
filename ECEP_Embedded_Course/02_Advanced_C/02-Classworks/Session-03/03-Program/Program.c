#include<stdio.h>

int main()
{
    // Code
    int iNum1, iNum2, iMax;

    scanf("%d %d", &iNum1, &iNum2);


    if(iNum1 > iNum2)
    {
        iMax = iNum1;
        printf("Maximum number is %d\n", iMax);
    }

    else
    {
        iMax = iNum2;
        printf("Maximum number is %d\n", iMax);
    }

    return (0);
}
