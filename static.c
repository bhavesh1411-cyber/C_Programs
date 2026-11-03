#include <stdio.h>

void display()
{
    static int x = 1;
    printf("%d\n", x);
    x++;
};

int main()
{
    display();
    display();
    display();

    return 0;
}