#include<stdio.h>

int main()
{
    // Code
    char name_letter;
    int pincode;
    float height;
    double latitude, longitude;
    
    printf("Enter first letter of your name: ");
    scanf("%c", &name_letter);
    
    printf("Enter your pincode: ");
    scanf("%d", &pincode);
    
    printf("Enter your height in feet: ");
    scanf("%f", &height);
    
    printf("Enter your latitude & longitude of your address: ");
    scanf("%lf\t%lf", &latitude, &longitude);
    
    
    printf("Here is what you have entered: \n");
    printf("First Letter in Name: %c\n", name_letter);
    printf("Pincode: %d\n", pincode);
    printf("Height: %f ft\n", height);
    printf("Location: %lf\t%lf\n", latitude, longitude);
    
    return (0);
}