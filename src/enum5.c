#include <stdio.h>

typedef enum 
{
    Red,
    Green,
    Blue,
}color;

int main(void)
{
    color c = Green;
    printf("%d\n",c);

    return 0;
}

