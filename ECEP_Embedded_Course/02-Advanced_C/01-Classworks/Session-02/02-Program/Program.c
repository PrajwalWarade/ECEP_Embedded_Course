#include<stdio.h>

int main(void)
{
    // Code
    char gender;
    int marks;
    float Ht;
    double average;

    printf("Enter Your Gender :-> \n");
    scanf("%c",&gender);

    printf("Enter the Marks :-> \n");
    scanf("%d", &marks);

    printf("Enter the Height :-> \n");
    scanf("%f", &Ht);

    printf("Enter the Average :-> \n");
    scanf("%lf", &average);

    printf("---------------------------------\n");
    printf("---------------------------------\n");
    printf("Gender - %c\nMarks - %d\nHeight - %f\nAverage - %lf\n", gender, marks, Ht, average);
    printf("---------------------------------\n");

    return(0);
}
