#include<stdio.h>

float ftToCm(int ft)
{   
    return ft * 30.48;

}

float inToCm(int in)
{
    return in * 2.54;
}

int main()
{
    int ft, in;
    float cmFt, cmIn, cm;

    printf("Enter ft: ");
    scanf("%d", &ft);
    printf("Enter inches: ");
    scanf("%d", &in);

    cmFt = ftToCm(ft); 
    cmIn = inToCm(in);
    cm = cmFt + cmIn;

    printf("Height in cm: %.1f", cm);
    return 0;
}