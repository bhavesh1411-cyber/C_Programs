#include <stdio.h>

enum mode
{
    Off,
    Low,
    Medium,
    High,
};

struct Device
{
    unsigned int power : 1;
    unsigned int mode : 2;
};

int main(void)
{
    struct Device d;

    d.power = 1;
    d.mode   = High;
    


    printf("Power: %u\n", d.power);
    printf("Mode: %u\n", d.mode);
    

    return 0;
}