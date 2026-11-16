#include<stdio.h>

int main()
{
    // Code
    int iNo1, iNo2, iMax;

    scanf("%d %d", &iNo1, &iNo2);

    if(iNo1 > 0 && iNo2 > 0 && iNo1 != iNo2)
    {
        if(iNo1 > iNo2)
        {
            iMax = iNo1;
        }
        else
        {
            iMax = iNo1;
        }

        printf("Maximum no is: %d\n", iMax);
    }

    else
    {
        printf("Invalid Output\n");
    }

    return (0);
}
