#include <stdio.h>

typedef struct 
{
    char name[50];
    int roll_no;
    float marks;
}student;


int main(void)
{
    student s = {"Aman",20,95.54};

    printf("Name is %s, Roll No is %d amd Marks are %1.f\n", s.name, s.roll_no, s.marks);
    
    return 0;
}