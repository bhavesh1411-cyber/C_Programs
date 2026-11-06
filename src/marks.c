#include <stdio.h>

int main()
{
    float a;
    printf("Enter you marks:");
    scanf("%f", &a);
    if (a <= 100 && a >= 90)
    {
        printf("Your grade is A\n");
    }
    else if (a < 90 && a >= 80)
    {
        printf("Your grade is B\n");
    }
    else if (a < 80 && a >= 70)
    {
        printf("Your grade is C\n");
    }
    else if (a < 70 && a >= 60)
    {
        printf("Your grade is D\n");
    }
    else if (a < 60 && a >= 50)
    {
        printf("Your grade is E\n");
    }
    else if (a < 50)
    {
        printf("Your have failed\n");
    }
    return 0;
}