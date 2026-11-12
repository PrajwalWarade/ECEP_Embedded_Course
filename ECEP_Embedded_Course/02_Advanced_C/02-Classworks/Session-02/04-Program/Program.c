#include<stdio.h>

int main()
{
    // Code
    int iNum1, iNum2;

    printf("Enter Two Numbers: ");
    scanf("%d %d", &iNum1, &iNum2);
    
    printf("Sum of  %d and %d is %d\n", iNum1, iNum2, iNum1 + iNum2);
    printf("Diff of %d and %d is %d\n", iNum1, iNum2, iNum1 - iNum2);
    printf("Mult of %d and %d is %d\n", iNum1, iNum2, iNum1 * iNum2);
    printf("Div of  %d and %d is %d\n", iNum1, iNum2, iNum1 / iNum2);
    printf("Mod of  %d and %d is %d\n", iNum1, iNum2, iNum1 % iNum2);
    printf("Mod of  %d and %d is %d\n", iNum1, iNum2, iNum2 % iNum1);

    return (0);
}
