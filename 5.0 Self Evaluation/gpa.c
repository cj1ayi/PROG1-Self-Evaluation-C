#include <stdio.h>

int main()
{
    int score;
    float grade; 

    printf("Enter score: ");
    scanf("%d", &score);

    if (score >= 94)
        grade = 4.0;
    else if (score >= 89)
        grade = 3.5;
    else if (score >= 83)
        grade = 3.0;
    else if (score >= 78)
        grade = 2.5;
    else if (score >= 72)
        grade = 2.0;
    else if (score >= 66)
        grade = 1.5;
    else if (score >= 60)
        grade = 1.0;
    else
        grade = 0.0;

    printf("Grade: %.2f", grade);
    return 0;

}