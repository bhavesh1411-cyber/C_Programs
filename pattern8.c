#include <stdio.h>

int main()
{
    int n, coef;

    printf("Enter a number");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            printf(" ");
        }

        coef = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%4d", coef);
            coef = coef * (i - j) / j;
        }

        printf("\n");
    }

    return 0;
}