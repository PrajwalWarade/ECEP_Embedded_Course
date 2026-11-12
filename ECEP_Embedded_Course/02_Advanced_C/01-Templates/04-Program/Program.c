#include<stdio.h>

int main()
{
    // Code
    float fFah, fCel = 0.0;
    
    scanf("%f", &fFah);
    
    fCel = (fFah - 32) * 5/9;
    
    printf("%f\n",fCel);
    
    return (0);
}
