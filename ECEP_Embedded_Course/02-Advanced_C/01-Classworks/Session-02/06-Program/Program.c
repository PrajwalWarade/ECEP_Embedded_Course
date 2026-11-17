#include<stdio.h>

int main()
{
    // Code
    int iNum1, iSum = 0;

    printf("Enter Two Numbers: ");
    scanf("%d", &iNum1);

    iSum = iNum1 * (iNum1 + 1) / 2;

    printf("Sum of %d natural number is %d\n", iNum1, iSum);

    return (0);
}
