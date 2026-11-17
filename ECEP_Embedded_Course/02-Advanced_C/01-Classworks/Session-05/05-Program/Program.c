#include<stdio.h>

int main()
{
    // Code
    int Option;

    printf("1.Deposit\n2.Withdraw\n3.Check Balance\n4.Update\n5.Exit\n");
    printf("Select the Option\n");
    scanf("%d", &Option);

    switch(Option)
    {
        case 1:
            printf("Deposit\n");
            break;

        case 2:
            printf("Withdraw\n");
            break;

        case 3:
            printf("Checkbalance\n");
            break;

        case 4:
            printf("Update\n");
            break;

        case 5:
            printf("Exit\n");
            break;

        default:
            printf("Invalid Option\n");
            break;
    }

    return (0);
}
