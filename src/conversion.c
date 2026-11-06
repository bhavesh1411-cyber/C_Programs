#include <stdio.h>

int main()
{
    float km, m, in, cm, ft, mi;
    /*
     km is kilometer
     m is meter
     in is inches
     cm is centimeter
     ft is feet
     mi is miles
     */

    printf("Enter the length in Kilometer which has to be converted:");
    scanf("%f", &km);

    m = km * 1000;
    in = km * 39370.1;
    cm = km * 100000;
    ft = km * 3280.84;
    mi = km * 0.621371;

    printf("The lenght in meters is: %.2f m\n", m);
    printf("The lenght in inches is: %.2f in\n", in);
    printf("The lenght in centimeters is: %.2f cm\n", cm);
    printf("The lenght in feet is: %.2f ft\n", ft);
    printf("The lenght in miles is: %.2f mi\n", mi);

    return 0;
}