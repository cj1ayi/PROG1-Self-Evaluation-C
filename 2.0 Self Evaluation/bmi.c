#include <stdio.h>

double hConversion(double feet, double inches);
double wConversion(double lbs);
double bmiCalc(double kg, double m);

int main()
{
    double feet, inches, lbs, bmi, m, kg;

    printf("== BMI Calculator ==\n"); 

    printf("Input height (feet): ");
    scanf("%lf", &feet);
    printf("Input height (inches): ");
    scanf("%lf", &inches);
    printf("Input weight (lbs): ");
    scanf("%lf", &lbs);

    kg = wConversion(lbs);
    m = hConversion(feet, inches);
    bmi = bmiCalc(kg, m);

    printf("BMI: %.2lf\n", bmi);

    if (bmi < 18.5)
    {
        printf("You are underweight.\n");
    }
    else if (18.5 <= bmi && bmi <= 24.9)
    {
        printf("You are normal weight.\n");
    }
    else if (25 <= bmi && bmi <= 29.9)
    {
        printf("You are overweight.\n");
    }
    else if (bmi > 30)
    {
        printf("You are obese");
    }
    else 
    {
        printf("BMI does not exist");
    }

    return 0;
}

double hConversion(double feet, double inches)
{
    double feetToM = feet * 0.3048;
    double inchesToM = inches * 0.0254;
    return feetToM + inchesToM;
}

double wConversion(double lbs)
{
    return lbs * 0.453592;
}

double bmiCalc(double kg, double m)
{
    return kg / (m * m);
}
