#include <stdio.h>

int power(int x, int i)
{
    int result = 1;
    for (int j = 1; j <= i; j++) {
        result *= x; 
    }
    return result;
}

int main()
{
    int n;
    float x, sum = 0.0;

    printf("x: ");
    scanf("%f", &x); 

    printf("n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += (float)power((int)x, i) / i;

    printf("Sum: %.2f\n", sum); 

    return 0;
}
