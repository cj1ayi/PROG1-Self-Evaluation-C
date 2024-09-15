// Write a program that accepts a three-digit integer input and displays each of the digits in that number.
#include <stdio.h>
/*

1. Ask the user to enter a three-digit integer.
2. Print
3.
4.


*/

int main()
{
    int n;
    printf("Enter a three-digit integer: ");
    scanf("%d", &n);

    printf("The digits in the number are: %d, %d, %d\n", n / 100, (n % 100) / 10, n % 10);


}