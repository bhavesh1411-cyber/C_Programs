#include <stdio.h>

enum number
{
    First = 10,
    Second,
    Third,
    Fouth = 30,
    Fifth,
};

int main(void)
{
    enum number result;

    result = Second;
    printf("Value of Second is: %d\n", result);

    return 0;
}