#include <stdio.h>

int main()
{
    int i, n, flag = 0;

    printf("Enter a value");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("It is not a prime no");
    }

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("It is a prime number \n");
    }

    else
    {
        printf("It is not a prime number\n");
    }

    return 0;
}