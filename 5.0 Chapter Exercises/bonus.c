/*
The Cheng Group of Companies gives year-end bonuses to its employees based on their number of years of service and their salary, using the following:
Years of service                       Bonus

1                                             1% of salary

2 to 3                                     2% of salary

4 to 10                                   5% of salary

10+                                        10% of salary

Write a function that will return the bonus given the salary and the number of years using the specifications stated.*/
#include <stdio.h>

float bonus(float salary, int years)
{
    if (years == 1)
        return salary * 0.01;
    else if (years >= 2 && years <= 3)
        return salary * 0.02;
    else if (years >= 4 && years <= 10)
        return salary * 0.05;
    else
        return salary * 0.1;
}


int main()
{
    float salary;
    int years;
    printf("Enter salary: ");
    scanf("%f", &salary);
    printf("Enter years of service: ");
    scanf("%d", &years);

    printf("Bonus: %.2f\n", bonus(salary, years));
}