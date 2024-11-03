#include <stdio.h>
//  Write a program that will ask the user if he wants to compute the perimeter of the area of a triangle. If the perimeter is wanted, ask the measures of the three sides and compute for the perimeter. If the area is wanted, ask for the measures of the base and height of the triangle and compute for the area. Display the computed value. Use functions.

float calcPerimeter(float s1, float s2, float s3)
{
    return s1 + s2 + s3;
}

float calcArea(float b, float h)
{
    return 0.5 * b * h;
}

int main()
{
    float s1, s2, s3, b, h, ans;
    int choice;
    
    printf("[1] Perimeter\n");
    printf("[2] Area\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);
    
    switch (choice)
    {
        case 1:
        {
            printf("Enter Sides of Triangle: ");
            scanf("%f%f%f", &s1, &s2, &s3);
            ans = calcPerimeter(s1, s2, s3);
            printf("%.2f", ans);
            break;
        }
        case 2:
        {
            printf("Enter base followed by height: ");
            scanf("%f%f", &b, &h);
            ans = calcArea(b, h);
            printf("%.2f", ans);
            break;
        }
    }
    return 0;
}
