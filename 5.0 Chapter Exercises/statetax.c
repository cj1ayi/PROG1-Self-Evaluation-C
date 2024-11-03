#include<stdio.h>
/*
Construct a function that computes the state income tax according to the following formula:
Net income is gross income minus deductions (both given as input parameters);

tax is: 3% on each peso of net income up to 8000

5% on each peso of net income from 8001 to 15000

8% on each peso of net income over 15000
*/
float stateTax(float grossIncome, float deductions)
{
    float netIncome = grossIncome - deductions;
    float tax = 0;
    if (netIncome <= 8000)
    {
        tax = netIncome * 0.03;
    }
    else if (netIncome >= 8001 && netIncome <= 15000)
    {
        tax = 8000 * 0.03 + (netIncome - 8000) * 0.05;
    }
    else
    {
        tax = 8000 * 0.03 + 7000 * 0.05 + (netIncome - 15000) * 0.08;
    }
    return tax;
}

int main()
{
    float grossIncome, deductions;
    printf("Enter your gross income: ");
    scanf("%f", &grossIncome);
    printf("Enter your deductions: ");
    scanf("%f", &deductions);

    printf("Your state tax is: %.2f\n", stateTax(grossIncome, deductions));
    return 0;
}