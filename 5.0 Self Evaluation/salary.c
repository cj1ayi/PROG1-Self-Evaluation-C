#include <stdio.h>
/*
Write a program that asks for the salary of an employee and compute for the income tax to be paid based on the given salary. Use the following scheme:

2% : for the first 1000 pesos

7% : for the next 2000 pesos

11% : for the remaining value
*/

float incomeTax(float salary)
{
    float tax = 0.0;
    if (salary <= 1000) 
        tax = salary * 0.02;
    else {
        tax += 1000 * 0.02; 
        salary -= 1000;     
        
        if (salary <= 2000) {
            tax += salary * 0.07;
        } else {
            tax += 2000 * 0.07; 
            salary -= 2000;      
            tax += salary * 0.11;  
        }
    }
    return tax;
}


int main()
{
    float salary; 

    printf("Enter Salary: ");
    scanf("%f", &salary);

    float incTax = incomeTax(salary);
    
    
    printf("The income tax to be paid is: %.2f pesos\n", incTax);

    return 0;
}