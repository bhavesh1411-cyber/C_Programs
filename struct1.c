#include <stdio.h>

struct student 
    {
        char name[50];
        int roll_no;
        float marks;
    };

int main(void)
{
    struct student s1 = {"Bhavesh",15,90};

    printf("Name is %s\n", s1.name);
    printf("Roll no is %d\n", s1.roll_no);
    printf("Marks are %.1f\n", s1.marks);

    return 0;
}
