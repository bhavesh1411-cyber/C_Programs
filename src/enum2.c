#include <stdio.h>

enum status
{
    Success = 1,
    Failure = 0,
    Unknown = -1,
};

int main(void)
{
    enum status result;

    result = Success;
    printf("Result is: %d\n", result);

    return 0;
}