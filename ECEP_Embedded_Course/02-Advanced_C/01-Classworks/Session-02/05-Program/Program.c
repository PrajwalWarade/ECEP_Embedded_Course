#include<stdio.h>

int main()
{
    // Code
    int iNum1, iNum2, iTemp = 0;

    printf("Enter Two Numbers: ");
    scanf("%d %d", &iNum1, &iNum2);

    printf("Before Swap iNum1 = %d and iNum2 = %d\n", iNum1, iNum2);

    iTemp = iNum1;
    iNum1 = iNum2;
    iNum2 = iTemp;
    
    printf("After Swap iNum1 = %d and iNum2 = %d\n", iNum1, iNum2);
    

    return (0);
}
