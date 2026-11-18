#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    float sum = 0, avg;

    if (argc < 2)
    {
        printf("Usage: %s num1 num2 num3 ...\n", argv[0]);
        return 1;
    }

    for (i = 1; i < argc; i++)
    {
        sum = sum + atof(argv[i]);
    }

    avg = sum / (argc - 1);

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}