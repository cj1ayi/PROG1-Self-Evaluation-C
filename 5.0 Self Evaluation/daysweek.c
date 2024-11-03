#include<stdio.h>
// Write a function that displays the day of the week in words given a number from 1 to 7. Assume that 1 is Monday and 7 is Sunday.
void displayDay()
{
    int day;
    printf("Enter a number from 1 to 7: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid input\n");
    }
}



int main()
{
    displayDay();
    return 0;
}
