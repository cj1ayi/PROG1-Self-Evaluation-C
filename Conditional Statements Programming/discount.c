
#include<stdio.h>
int main()
{
// Initializing Values
float fDiscount = 0.1, fTotal, fFinal, fLess;
int nAge;
// Input price and age
printf("%-19s","Enter total price:");
scanf("%f", &fTotal);
printf("%-18s","How old are you?:");
scanf("%d", &nAge);
printf("\n");

// Condition that checks if the user is a "teen"
if (nAge >= 13 && nAge <= 18)
{
    // Apply Discount
    fFinal = fTotal - (fTotal * fDiscount);
    fLess = fTotal * fDiscount;
    // Print Price and Less from Discount
    printf("Price:");
    printf("%22.2f\n",fTotal);
    printf("Less:");
    printf("%23.2f\n",fLess);
}
// No discount if the user is not a teen.
else
{
    // Set the final as the original price (no discount)
    fFinal = fTotal;
    printf("Price:");
    printf("%22.2f\n",fTotal);
}

// Print the divider and final price
printf("============================\n");
printf("Final Sale Price:");
printf("%11.2f\n",fFinal);
