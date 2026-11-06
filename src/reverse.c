#include <stdio.h>

int main()
{
    int i, rev = 0, digit;

    printf("Enter a value");
    scanf("%d", &i);

    for (; i != 0; i = i / 10)
    {
        digit = i % 10;
        rev = rev * 10 + digit;
    }

    printf("the reversed value is %d\n", rev);

    return 0;
}