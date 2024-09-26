#include<stdio.h>

int main ()
{
	float fFahrenheit, fCelcius;
	// 1. Ask for temperature fFahrenheit
	printf("Temperature in Fahrenheit (F): ");
	scanf("%f",&fFahrenheit);
	
    fCelcius = (5.0/9)*(fFahrenheit-32);

    printf("Celcius: %.2f", fCelcius);
    return 0;
}