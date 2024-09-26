#include<stdio.h>
// 1. Define PI as constant
#define PI 3.14159f

int main()
{
	float fRadius, fArea;
	// 2. Ask for the radius fRadius
	printf("Enter radius: ");
	scanf("%f", &fRadius);
	
	// 3. Compute for area fArea using the given formula
	fArea = PI * (fRadius * fRadius);
	
	// 4. Display the computed area fArea
	printf("The area of the circle with radius %.1f cm is %.2f sq. cm.\n",fRadius, fArea);
	return 0;
}
