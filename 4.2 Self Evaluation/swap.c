#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    float  a, b;

    printf("Enter num1: ");
    scanf("%f", &a);
    printf("Enter num2: ");
    scanf("%f", &b);

    float tmp = a;
    a = b;
    b = tmp;

    printf("num1 is now %f\n", a);
    printf("num1 is now %f\n", b);
}
