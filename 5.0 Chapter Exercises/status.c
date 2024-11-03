#include <stdio.h>

int main()
{
    char status;
    int age; 

    printf("Enter status (S/M): ");
    scanf("%c", &status);

    printf("Enter age: ");
    scanf("%d", &age);

    if (status == 'S')
    {
        if (age >= 16 && age <= 25)
            printf("QUALIFIED!");
    }
    else
    {
        if (age >= 21 && age <= 30)
            printf("SORRY! NOT QUALIFIED!");
    }

}