/*	
BMI
Starvation	<15
Anorexic	15.1 to 17.5
Underweight	17.6 to 18.5
Ideal	18.6 to 24.9
Overweight	25 to 29.9
Obese	30 to 39.9
Morbidity Obese	40.0 above
*/

#include <stdio.h>

int main ()
{
    float h,w,BMI;
    printf("Enter your Height in meter:");
    scanf ("%f",&h);
    printf("Enter your Weight in Kilogram:");
    scanf ("%f",&w);
    BMI = w/(h*h);
    
    if (BMI<=15.0 )
    {
        printf ("Starvation\n");
    }
    else if (BMI>15.0 && BMI<= 17.5)
    {
        printf ("Anorexic\n");
    }
    else if (BMI>=17.6 && BMI<= 18.5)
    {
        printf ("Underweight\n");
    }
    else if (BMI>=18.6 && BMI<= 24.9)
    {
        printf ("Ideal\n");
    }
    else if (BMI>=25 && BMI<= 29.9)
    {
        printf ("Overweight\n");
    }
    else if (BMI>=30 && BMI<= 39.9)
    {
        printf ("Obese\n");
    }
    else if (BMI>=40.0)
    {
        printf ("Morbidity\n");
    }

    return 0;
}