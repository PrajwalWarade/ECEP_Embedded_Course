// xxxx
#include<stdio.h>

int main()
{
    // Code
    int Amount;

    int i500Note, i200Note, i100Note, i50Note, i20Note, i10Note, i5Note, i2Note;

    scanf("%d", &Amount);

    if(Amount >= 500)
    {
        i500Note = Amount / 500;
        Amount = Amount - i500Note * 500;
        printf("500 -> %d\n", i500Note);
    }

    // printf("Amount After 500 ----> %d\n", Amount);

    if(Amount >= 200)
    {
        i200Note = Amount / 200;
        Amount = Amount - i200Note * 200;
        printf("200 -> %d\n", i200Note);
    }

    // printf("Amount After 200 ----> %d\n", Amount);

    if(Amount >= 100)
    {
        i100Note = Amount / 100;
        Amount = Amount - i100Note * 100;
        printf("100 -> %d\n", i100Note);
    }

    // printf("Amount After 100 ----> %d\n", Amount);

    if(Amount >= 50)
    {
        i50Note = Amount / 50;
        Amount = Amount - i50Note * 50;
        printf(" 50 -> %d\n", i50Note);
    }

    // printf("Amount After 50 ----> %d\n", Amount);

    if(Amount >= 20)
    {
        i20Note = Amount / 20;
        Amount = Amount - i20Note * 20;
        printf(" 20 -> %d\n", i20Note);
    }

    // printf("Amount After 20 ----> %d\n", Amount);

    if(Amount >= 10)
    {
        i10Note = Amount / 10;
        Amount = Amount - i10Note * 10;
        printf(" 10 -> %d\n", i10Note);
    }
    
    // printf("Amount After 10 ----> %d\n", Amount);

    if(Amount >= 5)
    {
        i5Note = Amount / 5;
        Amount = Amount - i5Note * 5;
        printf("  5 -> %d\n", i5Note);
    }

    // printf("Amount After 5 ----> %d\n", Amount);

    if(Amount >= 2 && Amount <= 4)
    {
        i2Note = Amount / 2;
        Amount = Amount - i2Note * 2;
        printf("  2 -> %d\n", i2Note);
    }

    // printf("Amount After 2 ----> %d\n", Amount);

    if(Amount == 1)
    {
        printf("  1 -> %d\n", Amount);
    }

    return (0);
}
