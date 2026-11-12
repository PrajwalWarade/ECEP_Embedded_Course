#include<stdio.h>

int main(void)
{
    // Code
    char gender = 'M';
    int marks = 95;
    float Ht = 5.8f;
    double average = 95.15;

    printf("Gender - %c\n", gender);
    printf("marks - %d\n", marks);
    printf("Height - %f\n", Ht);
    printf("Average is - %lf\n", average);
    printf("---------------------------------\n");
    printf("---------------------------------\n");
    printf("Gender - %c\nMarks - %d\nHeight - %f\nAverage - %lf\n", gender, marks, Ht, average);
    printf("---------------------------------\n");

    return(0);
}
