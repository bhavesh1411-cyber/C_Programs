#include <stdio.h>

int main()
{
    int i, original, digit, sum = 0;

    printf("Enter a value ");
    scanf("%d", &i);

    original = i;

    for (; i != 0; i = i / 10)
    {
        digit = i % 10;
        sum = sum + digit * digit * digit;
    }

    if (original == sum)
    {
        printf("It is a armstrong and the no  is %d\n", sum);
    }
    else
    {
        printf("It is not a armstrong ");
    }

    return 0;
}