#include <stdio.h>
#include <math.h>

int main()
{
    float fAngle, fHypo, fOpp;
    printf("Enter angle (degrees): ");
    scanf("%f", &fAngle);
    printf("Enter hypotenuse: ");
    scanf("%f", &fHypo);

    fOpp = sin(fAngle*M_PI/180) * fHypo;

    printf("The opposite side is %.2f",fOpp);

    return 0;

}