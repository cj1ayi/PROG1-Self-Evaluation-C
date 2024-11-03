#include <stdio.h>
// Write a function that accepts four whole numbers as parameters and displays the highest number. Assume that there are no duplicates.
int main()
{
    int a, b, c, d;
    int highest;
    scanf("%d%d%d%d", &a,&b,&c,&d);
    
    highest = a;
    
    if (b > highest)
        highest = b;
    if (c > highest)
        highest = c;
    if (d > highest)
        highest = d;
        
    printf("Highest Value: %d",highest);
        
}
