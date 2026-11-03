#include <stdio.h>

enum Menu
{
    Add=1,
    Subtract,
    Multiply,
    Exit,
};

int main(void)
{
    enum Menu choice = Multiply;

    switch(choice)
    {
        case Add:
        printf ("Addition Selected\n");
        break;

        case Subtract:
        printf("Subtraction Selected\n");
        break;

        case Multiply:
        printf("Multiplication Selected\n");
        break;

        case Exit:
        printf("Exit selected\n");
        break;

        default:
        printf("Invalid Choice\n");
    }
    
    return 0;
}