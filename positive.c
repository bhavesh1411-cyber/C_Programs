#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number which you check for positive, negative, zero:");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("The number is positive %d\n", n);
    }
    else if (n < 0)
    {
        printf("The number is negative %d\n", n);
    }
    else
    {
        printf("The number is zero %d\n", n);
    }
    return 0;
}