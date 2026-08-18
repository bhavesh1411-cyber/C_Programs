#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, D, root1, root2, root3;

    printf("Enter the value of a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D > 0)
    {
        root1 = (-b + sqrt(D)) / (2 * a); // Used to find the roots when D > 0
        root2 = (-b - sqrt(D)) / (2 * a); // Used to find the roots when D > 0
        printf("The quadratic equation has two real and distinct root which are %.2lf , %.2lf\n", root1, root2);
    }
    else if (D == 0)
    {
        root3 = -b / (2 * a); // Used to find the roots when D == 0
        printf("The quadratic equation has one real and distinct solution which is  %.2lf\n", root3);
    }
    else
    {
        printf("The quadratic equation has complex roots\n");
    }
    return 0;
}
