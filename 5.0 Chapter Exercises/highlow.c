#include <stdio.h>

int main()
{
    printf("Enter 3 numbers: ");
    int a, b, c;
    int highest, middle, lowest;
    scanf("%d%d%d", &a,&b,&c);
    
    if (a > b && a > c)
    {
        highest = a;
        if (b > c)
        {
            middle = b;
            lowest = c;
        }
        else
        {
            middle = c;
            lowest = b;
        }
    }
    else if (b > a && b > c)
    {
        highest = b;
        if (a > c)
        {
            middle = a;
            lowest = c;
        }
        else
        {
            middle = c;
            lowest = a;
        }
    }
    else
    {
        highest = c;
        if (a > b)
        {
            middle = a;
            lowest = b;
        }
        else
        {
            middle = b;
            lowest = a;
        }
    }
    
    printf("Highest: %d\nMiddle: %d\nLowest: %d",highest,middle,lowest);
    return 0;
}