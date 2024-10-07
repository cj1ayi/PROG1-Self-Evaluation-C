#include<stdio.h>
/*
Item prices are usually inclusive of taxes. Write a program
that displays a breakdown of the charges given the prices and
the tax rate included.
*/

float computeTax(float fPrice, float fRate)
{
    return fPrice/(1+(fRate/100));
}

int main()
{
    float fPrice, fRate;
    float fPreTax, fTax, fTotal;
    printf("Item Price: ");
    scanf("%f", &fPrice);
    printf("Tax Rate: ");
    scanf("%f", &fRate);

    fPreTax = computeTax(fPrice, fRate);
    fTax = fPrice - fPreTax;
    fTotal = fPreTax + fTax;

    printf("\nBefore Tax: %.2f\n", fPreTax);
    printf("Tax %.2f: %.2f\n", fRate, fTax);
    printf("---------------------------\n");
    printf("Total: %.2f\n", fTotal);

    return 0;
}