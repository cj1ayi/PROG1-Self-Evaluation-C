#include <stdio.h>

int main()
{
    int tempF;
    double tempC;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%d", &tempF);

    tempC = (5.0/9)*(tempF-32);

    printf("Temp in Celsius: %.2lf", tempC);
}