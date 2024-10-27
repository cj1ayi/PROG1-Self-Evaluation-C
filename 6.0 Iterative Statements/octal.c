#include <stdio.h>

void displayOctal(int fInput)
{
    int i;
    // Main iteration loop
    for (i = 0; i <= fInput; i++)
    {
        int nNum = i; // Holds the value of i to be converted to octal
        int nOctal = 0; // Variable for Octal representation of the number
        int nPlace = 1; // Place of the digit of current digit in the octal number

        // Loop to convert input to an octal 
        while (nNum > 0)
        {
            int nRemainder = nNum % 8; /* Get the remainder of nNum when divided by 8 to 
                                        extract the rightmost digit of the octal.*/
            nOctal += nRemainder * nPlace;  /* Add the value of nOctal with the 
                                            remainder times the updated place value if any */
            nNum /= 8; // Update nNum with the quotient by dividing nNum by 8 
            nPlace *= 10; // Moves to next place when multiplied by 10. 
                          // Updates during every iteration of the while loop.
        }
        // Print the octal numbers each with one space to the right
        printf("%d ", nOctal);
    }
    printf("\n");
}

int main()
{
    // Input decimal number
    float fInput;
    scanf("%f", &fInput);
    // Call function
    displayOctal(fInput);

    return 0;
}