#include <stdio.h>

// global variable
float total_subjects = 2;
float main()
{
    float marks1, marks2, average, percentage;
    printf("Enter the marks of subject1 out of 100 %f", marks1);
    scanf("%f", &marks1);
    printf("Enter the marks  of subject2 out of 100 %f", marks2);
    scanf("%f", &marks2);
    average = (marks1 + marks2) / total_subjects;
    percentage = average;
    printf("Average: %.2f\n", average);
    printf("Percentage: %.2f\n", percentage);
    return 0;
}