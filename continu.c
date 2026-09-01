#include <stdio.h>

int main()
{
    int i, age;

    printf("Enter your age: %d\n", age);
    scanf("%d", &age);

    for (i = 1; i <= 5; i++)
    {
        if (age < 0)
        {
            printf("Invalid age\n");
            continue;
        }

        if (age < 18)
        {
            printf("You are not eligible to vote\n");
            continue;
        }

        printf("You are eligible to vote\n");
    }
    return 0;
}