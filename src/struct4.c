#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    int id;
    char name[50];
    struct Date joiningDate;
};

int main(void)
{
    struct Employee e = {101, "Aman", {15, 3, 2024}};

    printf("ID is %d\n", e.id);
    printf("Name is %s\n", e.name);
    printf("Joining Date is %d, %d, %d\n", e.joiningDate.day, e.joiningDate.month, e.joiningDate.year);

    return 0;
}