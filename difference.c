#include <stdio.h>

int main()
{
    int a;
    int b;
    int difference;
    printf ("Enter the first two number\n");
    scanf("%d%d", &a, &b);
    difference = a-b;
    printf("The Difference betwen a and b is %d\n", difference);
    return 0;
}