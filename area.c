#include <stdio.h>

float main()
{
    float lenght, breadth, area, perimeter;

    printf("Enter the lenght of the rectangle:");
    scanf("%f", &lenght);

    printf("Enter the breadth of the rectangle:");
    scanf("%f", &breadth);

    area = lenght * breadth;
    perimeter = 2 * (lenght + breadth);

    printf("Area of the rectangle of the given length and breadth is %.2f\n", area);
    printf("The Perimeter of the rectangle of the given length and breadth is %.2f\n", perimeter);

    return 0;
}