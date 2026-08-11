#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the number of which divisibilty you want to check %d", a);
    scanf("%d", &a);
    b = a / 97;
    printf("The qoutient is %d", b);
    printf("The remainder is %d", a%97);
    return 0;
}