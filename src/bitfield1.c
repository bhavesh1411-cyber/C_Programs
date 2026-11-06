#include <stdio.h>

struct Flags
{
    unsigned int ready : 1;
    unsigned int error : 1;
    unsigned int mode : 2;
};

int main(void)
{
    struct Flags f;

    f.ready = 1;
    f.error = 0;
    f.mode = 2;

    printf("Ready: %u\n", f.ready);
    printf("Error: %u\n", f.error);
    printf("Mode: %u\n", f.mode);

    return 0;
}