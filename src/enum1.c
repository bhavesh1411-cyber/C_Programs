#include <stdio.h>

enum Day
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday,
};

int main(void)
{
    enum Day today;

    today = Wednesday;

    printf("Day number is: %d\n", today);

    return 0;
}