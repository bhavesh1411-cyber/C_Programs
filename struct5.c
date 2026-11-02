#include <stdio.h>

struct student
{
    char name[50];
    int roll_no;
    float marks;
} s1;

int main(void)
{
    struct student s1 = {"Aman", 10, 90.53};
    struct student s2;

    s2 = s1;

    printf("Name of the student is %s, ROll no is %d and Marks are %.1f", s2.name, s2.roll_no, s2.marks);

    return 0;
}