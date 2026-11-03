#include <stdio.h>

typedef struct
{
    int day;
    int month;
    int year;
} Date;

typedef struct
{
    int id;
    char name[50];
    Date joiningdate;
} Employee;

int main(void)
{
    Employee e = {101, "Aman", {15, 10, 2025}};

    printf("ID is %d\n", e.id);
    printf("Name is %s\n", e.name);
    printf("Joining Date is %d, %d, %d\n", e.joiningdate.day, e.joiningdate.month, e.joiningdate.year);

    return 0;
}