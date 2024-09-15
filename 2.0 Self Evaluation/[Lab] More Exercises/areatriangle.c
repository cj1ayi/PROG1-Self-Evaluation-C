#include <stdio.h>
int main()
{
    double base, height, area;

    printf("Enter triangle base: ");
    scanf("%lf", &base);
    printf("Enter triangle height: ");
    scanf("%lf", &height);

    area = 1.0/2*(base*height);

    printf("Area: %.1lf", area);
}