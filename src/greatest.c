#include <stdio.h>

int main()
{
    float a, b, c, d;

    printf("Enter the value of a:\n");
    scanf("%f", &a);

    printf("Enter the value of b:\n");
    scanf("%f", &b);

    printf("Enter the value of c:\n");
    scanf("%f", &c);

    printf("Enter the value of d:\n");
    scanf("%f", &d);

    if (a > b && a > c && a > d)
    {
        printf("The greatest of all is %f\n", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("The greatest of all is %f\n", b);
    }
    if (c > b && c > a && c > d)
    {
        printf("The greatest of all is %f\n", c);
    }
    if (d > b && d > c && d > a)
    {
        printf("The greatest of all is %f\n", d);
    }
    return 0;
}