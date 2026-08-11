#include <stdio.h>

int main()
{
    int a;
    printf("Enter the your age: ");
    scanf("%d", &a);
    if (a > 60)
    {
        printf("You are a senior citizen and you are eligible to drive a car\n");
    }
    else if (a > 40)
    {
        printf("You are eligible to drive a car and you are elder\n");
    }
    else if (a > 18)
    {
        printf("You are eligible to drive a car\n");
    }
    else
    {
        printf("You are not eligible to drive a car\n");
    }
    return 0;
}