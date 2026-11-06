#include <stdio.h>

struct student
{
    char name[50];
    int roll_no;
    float marks;
} s1;

int main()
{
    struct student s1;

    printf("Enter your name:");
    scanf("%[^\n]", s1.name);

    printf("Enter your roll no:");
    scanf("%d", &s1.roll_no);

    printf("Enter your marks:");
    scanf("%f", &s1.marks);

    printf("Your Name is: %s, your roll no is: %d and your marks are: %.1f\n", s1.name, s1.roll_no, s1.marks);

    return 0;
}