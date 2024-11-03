#include <stdio.h>

int main()
{
    float hours, basicSalary, rate, bonus, totalSalary;
    printf("Hours worked: ");
    scanf("%f", &hours);
    printf("Hourly rate: ");
    scanf("%f", &rate);

    if (hours > 45)
        bonus = 100;
    else if (hours > 40 && hours <= 45)
        bonus = 50;
    else if (hours > 35 && hours <= 40)
        bonus = 25;
    else
        bonus = 0;

    basicSalary = hours * rate;

    totalSalary = basicSalary + bonus;
    printf("Total salary: %.2f\n", totalSalary);

}