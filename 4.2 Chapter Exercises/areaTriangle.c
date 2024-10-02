#include <stdio.h>

int main()
{
    float fBase, fHeight, fArea;
    printf("Enter base: ");
    scanf("%f",&fBase);
    printf("Enter height: ");
    scanf("%f",&fHeight);

    fArea = fBase * fHeight;

    printf("The area of the triangle is %.2f", fArea);

}