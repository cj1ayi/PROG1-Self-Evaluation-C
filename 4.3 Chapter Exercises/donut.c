#include <stdio.h>
#define PI 3.1416

/* write the function getArea() here */
float getArea(float fRadius)
{
    return PI * fRadius * fRadius;
}

float getAreaDonut (float fRadius1, float fRadius2) 
{

    // your code here, you can call getArea()
    float fArea1 = getArea(fRadius1);
    float fArea2 = getArea(fRadius2);
    return fArea1 - fArea2;

}

int main()
{  
    float fRadius1, fRadius2;
    float fArea;

    printf("Radius 1: "); 
    scanf("%f", &fRadius1);
    printf("Radius 2: "); 
    scanf("%f", &fRadius2);
    
    fArea = getAreaDonut(fRadius1, fRadius2);

    printf("\nArea is: %.1f\n", fArea);

    return 0;
}