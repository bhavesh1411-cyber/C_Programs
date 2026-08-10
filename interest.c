#include <stdio.h>
float main()
{
    float p,r,t,si;
    printf ("Enter the principle amount %f", p);
    scanf ("%f",&p);
    printf ("Ente the rate to interest %f", r);
    scanf ("%f",&r);
    printf ("Enter the time period %f", t);
    scanf ("%f",&t);
    si = (p*r*t)/100;
    printf ("Simple Interest is %f\n", si);
    return 0;

}
