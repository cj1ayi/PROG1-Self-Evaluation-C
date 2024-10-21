#include <stdio.h>

void displayN(int n)
{
    int i; 
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
}


int main()
{
    // Prompt user for a range
    // Display numbers up to that range
    int n; 
    printf("Range: ");
    scanf("%d", &n);
    displayN(n);

    return 0;
}