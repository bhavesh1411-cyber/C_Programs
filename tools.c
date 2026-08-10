#include <stdio.h>

int main() 
{
    int a,b,sum,difference,product,quotient;
    printf ("Enter the first number %d", a);
    scanf ("%d",&a);
    printf ("Enter the second number %d", b);
    scanf ("%d",&b);
    sum = a+b;
    difference = a-b;
    product = a*b;
    quotient = a/b;
    printf ("The sum is %d", sum);
    printf ("The difference is %d", difference);
    printf ("The product is %d", product);
    printf ("The quotient is %d", quotient);
    return 0;
}


