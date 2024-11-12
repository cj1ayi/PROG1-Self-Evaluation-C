#include <stdio.h>
/*
Write a program that asks for the salary of an employee and compute for the income tax to be paid based on the given salary. Use the following scheme:

2% : for the first 1000 pesos

7% : for the next 2000 pesos

11% : for the remaining value
*/

#include <stdio.h>

float incomeTax(float fSalary)
{
    // Initialize fTax as zero to prevent any garbage values
    float fTax = 0.0;
    
    // If the salary is less than or equal to 1000, apply 2% tax on the entire salary
    if (fSalary <= 1000) 
        fTax = fSalary * 0.02;  // Calculate 2% of the salary
    else 
    {
        // If salary is greater than 1000, calculate 2% tax on the first 1000 pesos
        fTax += 1000 * 0.02;    // Apply 2% tax on the first 1000
        // Deduct 1000 from salary since it's already taxed
        fSalary -= 1000;
        // If the remaining salary is less than or equal to 2000, apply 7% tax
        if (fSalary <= 2000) 
            fTax += fSalary * 0.07;  // Apply 7% tax on the next portion up to 2000 pesos
        else 
            // Apply 7% tax on the next 2000 pesos if salary exceeds 3000
            fTax += 2000 * 0.07;    // Apply 7% tax on the next 2000 pesos
    }
    return fTax; // return total tax
}

int main()
{
    float fSalary; 

    printf("Enter Salary: ");
    scanf("%f", &fSalary);
    float fIncTax = incomeTax(fSalary);
    printf("The income tax to be paid is: %.2f pesos\n", fIncTax);

    return 0;
}