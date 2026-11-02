#include <stdio.h>

struct student
{
    char name[50];
    int roll_no;
    float marks;
};

int main(void)
{
    struct student students[3] =
        {
            {"Riya", 01, 85},
            {"Aman", 02, 80},
            {"Neha", 03, 90}};

    for (int i = 0; i < 3; i++)
    {
        printf("Name is %s, Roll NO is %d and Marks are %.1f\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}