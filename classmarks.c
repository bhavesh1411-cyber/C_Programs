#include <stdio.h>

int main()
{
    float marks1, marks2, marks3, marks4, marks5, average;

    printf("Enter the marks of Subject 1:");
    scanf("%f", &marks1);

    printf("Enter the marks of Subject 2:");
    scanf("%f", &marks2);

    printf("Enter the marks of Subject 3:");
    scanf("%f", &marks3);

    printf("Enter the marks of Subject 4:");
    scanf("%f", &marks4);

    printf("Enter the marks of Subject 5:");
    scanf("%f", &marks5);

    average = (marks1 + marks2 + marks3 + marks4 + marks5) / 5;

    printf("Your marks are %.2f %.2f %.2f %.2f %.2f \n", marks1, marks2, marks3, marks4, marks5);

    printf("Your average marks are %.2f\n", average);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33 || marks4 < 33 || marks5 < 33)
    {
        printf("You have failed in indivisual subject\n");
    }
    else if (average < 40)
    {
        printf("You have failed in class\n");
    }
    else
    {
        printf("You have passed!\n");
        if (average <= 100 && average >= 90)
        {
            printf("Your grade is A+\n");
        }
        else if (average < 90 && average >= 80)
        {
            printf("Your grade is A\n");
        }
        else if (average < 80 && average >= 70)
        {
            printf("Your grade is B+\n");
        }
        else if (average < 70 && average >= 60)
        {
            printf("Your grade is B\n");
        }
        else if (average < 60 && average >= 50)
        {
            printf("Your grade is C\n");
        }
        else if (average < 50 && average >= 40)
        {
            printf("Your grade if D\n");
        }
    }
    return 0;
}