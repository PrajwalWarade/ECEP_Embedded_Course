#include<stdio.h>

int main(void)
{
    // Code
    char Operator;
    int iNum1, iNum2;

    printf("Enter Your Operator :-> \n");
    scanf("%c",&Operator);

    printf("Enter the Marks :-> \n");
    scanf("%d %d", &iNum1, &iNum2);

    printf("%d %c %d = %d\n", iNum1, Operator, iNum2, iNum1 + iNum2);

    return(0);
}
