#include <stdio.h>
/*
Workers at a particular company were given a 15.5% salary increase.
Moreover, the increase was effective 2 months ago. Write a program that takes the employee’s old salary 
as input and displays the amount of retroactive pay (the increase that was not given for the past 2 months) 
and the employee’s new salary.
*/

int main()
{
    double oldSalary, retroPay, newSalary;
    printf("Old salary: ");
    scanf("%lf", &oldSalary);

    newSalary = oldSalary * (1.155);

    retroPay = (((newSalary-oldSalary)/12.0)*2);

    printf("New Salary: %.2lf\n", newSalary);
    printf("Retroactive Pay: %.2lf\n", retroPay);

    return 0;
}