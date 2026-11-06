#include <stdio.h>

int main()
{
    int a,b,i,lcm,gcd;

    printf ("Enter two numbers");
    scanf("%d %d",&a,&b);

    for (i=1;i<=a && i<=b;i++)
    {
        if (a%i==0 && b%i==0)
        {
            gcd=1;
        }
    }

    lcm = (a*b)/gcd;

    printf("GCD is %d\n",gcd);
    printf("Lcm is %d\n",lcm);

    return 0;
}