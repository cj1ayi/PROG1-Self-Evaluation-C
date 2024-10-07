#include <stdio.h>
/*
A square pyramid has 4 triangle faces,
and a square base.
When the side faces are the same, its
surface area SA can be computed using
the formula:
SA = 1/2 * squarePerimeter * slantLength + baseArea
Write a program that displays the surface area of a pyramid.
*/

float areaCalc(float fPerimeter, float fSlant, float fBase)
{
    return 0.5 * fPerimeter * fSlant + fBase;
}

int main()
{
    float fPerimeter, fSlant, fBase;
    float fSurfaceArea;
    printf("Enter Square Perimeter: ");
    scanf("%f", &fPerimeter);
    printf("Enter Slant Length: ");
    scanf("%f", &fSlant);
    printf("Enter Base Area: ");
    scanf("%f", &fBase);

    fSurfaceArea = areaCalc(fPerimeter, fSlant, fBase);

    printf("Surface Area: %.2f",fSurfaceArea);

    return 0;
}