#include <stdio.h>

int main()
{
    float km, m;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    m = km * 1000;

    printf("%.2f km. = %.2f",km, m);
    return 0;
}