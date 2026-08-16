#include <stdio.h>

int main()
{
    float marks1, marks2, marks3, marks4, marks5, average;
    int failcount = 0;

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

    if (marks1 < 33)
        failcount++;
    if (marks2 < 33)
        failcount++;
    if (marks3 < 33)
        failcount++;
    if (marks4 < 33)
        failcount++;
    if (marks5 < 33)
        failcount++;

    if (failcount >= 2)
    {
        printf("You have failed in class and must reappear in all subjects\n");
    }

    else if (failcount == 1)
    {
        printf("You have failed in indivisual subject and must reappear in:\n");
        if (marks1 < 33)
            printf("Subject 1\n");
        if (marks2 < 33)
            printf("Subject 2\n");
        if (marks3 < 33)
            printf("Subject 3\n");
        if (marks4 < 33)
            printf("Subject 4\n");
        if (marks5 < 33)
            printf("Subject 5\n");
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