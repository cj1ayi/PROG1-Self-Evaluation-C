#include <stdio.h>


int main()
{
    // Ask the user for inputs: hours worked and hourly rate
    float fHours, fBasicSalary,fRate, fBonus, fTotalSalary;
    printf("Hours worked: ");
    scanf("%f", &fHours);
    printf("Hourly rate: ");
    scanf("%f", &fRate);

    // Set bonus based on hours worked
    if (fHours > 45)
        fBonus = 100;
    else if (fHours > 40 && fHours <= 45)
        fBonus = 50;
    else if (fHours > 35 && fHours <= 40)
        fBonus = 25;
    else
        fBonus = 0;

    // Calculate the basic salary 
    fBasicSalary = fHours * fRate;
    
    // Calculate and display total salary 
    fTotalSalary = fBasicSalary + fBonus;
    printf("Total salary: %.2f\n", fTotalSalary);

}