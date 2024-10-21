#include <stdio.h>

int main()
{
    int i = 1;
    printf("Using for loops\n");
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    printf("Using while loops\n");
    i = 1;
    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }

    printf("Using do while loops\n");
    i = 1;
    do {
        if(i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    } while (i <= 100);

    return 0;
}