#include <stdio.h>

void multiplesOf(int x, int range)
{
    int i;
    for (i = 1; i <= range; i++)
    {
        int multiple = x * i;
        printf("%d\n", multiple);
    }
}

int main()
{
    int x, range;
    printf("x: ");
    scanf("%d", &x);
    printf("Range: ");
    scanf("%d", &range);
    multiplesOf(x, range);
    return 0;
}