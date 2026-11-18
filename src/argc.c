#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, max;

    max = atoi(argv[1]);

    for (i = 2; i < argc; i++)
    {
        if (atoi(argv[i]) > max)
            max = atoi(argv[i]);
    }

    printf("Largest = %d", max);
    return 0;
}