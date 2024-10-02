#include <stdio.h>

float convertCupToPINT (float fCups)
{
    float fPint = fCups * 2;
    return fPint;
}

float convertCupToTBSP(float fCups)
{
    float fTbsp = fCups * 16.0;
    return fTbsp;
}

/* write the function covertCupToTSP() here */
float covertCupToTSP(float fCups)
{
    float fTsp = fCups * 48.0;
    return fTsp;
}

void displayConversions(float fCups) 
{
    float fPint = convertCupToPINT(fCups);
    float fTbsp = convertCupToTBSP(fCups);
    float fTsp = covertCupToTSP(fCups);

    printf("Pints: %.1f\n", fPint);
    printf("Tablespoons: %.1f\n", fTbsp);
    printf("Teaspoons: %.1f\n", fTsp);
}
int main()
{  
    float fCups;

    printf("Enter No. of Cups: "); 
    scanf("%f", &fCups);

    displayConversions(fCups);
    return 0;
}