#include<stdio.h>

int main()
{
    int grade;
    printf("Enter your GPA: ");
    scanf("%d", &grade);

    if (grade == 4.0)
    {
        printf("V. Good!\n");
        printf("Keep it up!\n");
    }
    return 0;
}