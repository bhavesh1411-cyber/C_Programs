#include <stdio.h>
int main()
{
    int a;
    printf("Enter the your age %d", a);
    scanf("%d", &a);
    if (a > 10)
    {
        printf("Your age is greater than 10");
    }
    else
    {
        printf("Your age is less than 10");
    }
    return 0;
}
