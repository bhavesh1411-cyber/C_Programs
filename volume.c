#include <stdio.h>

float main()
{
    float r, h, area, volume;
    printf("Enter the radius of the cylinder: %f", r);
    scanf("%f", &r);
    printf("Enter the height of the cylinder: %f", h);
    scanf("%f", &h);
    area = 2 * 3.14 * r * (r + h);
    volume = 3.14 * r * r * h;
    printf("The area of the cylinder is %.2f \n", area);
    printf("The volume of the cylinder is %.2f \n", volume);
    return 0;
}
