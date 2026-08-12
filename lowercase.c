#include <stdio.h>

int main()
{
    char a;
    printf("Enter an alphabet in lower or uppercase:\n");
    scanf("%c", &a);
    printf("The value of this alphabet is %d\n", a);

    if (a >= 97 && a <= 122)
    {
        printf("The alphabet is in lower case\n");
    }
    else
    {
        printf("The alphabet is not in lower case\n");
    }
    return 0;
}