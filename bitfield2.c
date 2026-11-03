#include <stdio.h>

struct Permission
{
    unsigned int read : 1;
    unsigned int write : 1;
    unsigned int execute : 1;
};

int main(void)
{
    struct Permission p = {1,0,1};


    printf("Ready: %u\n", p.read);
    printf("Error: %u\n", p.write);
    printf("Mode: %u\n", p.execute);

    return 0;
}