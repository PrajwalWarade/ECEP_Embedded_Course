#include<stdio.h>

int main()
{
    // Code
    float bank_balance = 1000.0f;
    float withdraw;

    scanf("%f", &withdraw);


    if(bank_balance >= withdraw)
    {
        bank_balance = bank_balance - withdraw;
        printf("Transaction succesfull\nYour updated balance is %g\n", bank_balance);
    }

    else
    {
        printf("Transaction failed!!!\nYour current bankbalance is %g\n", bank_balance);
    }

    return (0);
}
