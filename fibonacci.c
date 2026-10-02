#include <stdio.h>

int main()
{
    int i, n, sum, a = 0, b = 1;

    printf("Enter a number");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        sum = a + b;
        a = b;
        b = sum;
    }

    printf("\n");

    return 0;
}