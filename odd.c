#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number which you want to check it is even or odd");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("The number is even %d\n", n);
    }
    else
    {
        printf("The number is odd %d\n", n);
    }
    return 0;
}