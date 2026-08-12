#include <stdio.h>

int main()
{
    float  marks1, marks2, marks3;
    printf("Enter the marks of Subject 1:");
    scanf("%f", &marks1);
    printf("Enter the marks of Subject 2:");
    scanf("%f", &marks2);
    printf("Enter the marks of Subject 3:");
    scanf("%f", &marks3);
    printf("Your marks are %f %f %f\n", marks1, marks2, marks3);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("You have failed in indivisual subject\n");
    }
    else if (marks1 >= 33 && marks2 >= 33 && marks3 >= 33 && (marks1 + marks2 + marks3) / 3 <= 40)
    {
        printf("You have passed in indivisual subjects but have failed in class\n");
    }
    else if (marks1 >= 33 && marks2 >= 33 && marks3 >= 33 && (marks1 + marks2 + marks3) / 3 >= 40)
    {
        printf("You have passed!\n");
    }
    return 0;
}