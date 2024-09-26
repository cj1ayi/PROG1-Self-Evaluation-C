#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, root1, root2;
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    printf("Enter c: ");
    scanf("%f",&c);

    root1 = (-b + sqrt( pow(b,2) - 4 * a * c )) / (2 * a);
    root2 = (-b - sqrt( pow(b,2) - 4 * a * c )) / (2 * a);

    printf("The roots are %.2f and %.2f\n", root1, root2); 

    return 0;

}