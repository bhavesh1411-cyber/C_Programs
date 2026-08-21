#include <stdio.h>

int main()
{
    int days;
    int fine = 0;

    printf("Enter the number days; %d", days);
    scanf("%d", &days);

    if (days <= 5)
    {
        fine = 2 * days;
    }

    else if (days <= 10)
    {
        fine = 5 * 2 + (days - 5) * 4;
    }

    else if (days <= 10)
    {
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
    }

    else
    {
        printf("Membership Cancelled\n");
    }

    printf("Fine: Rs. %d\n", fine);

    return 0;
}