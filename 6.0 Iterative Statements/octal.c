#include <stdio.h>

void octalN(int n)
{
    for (int i = 0; i <= n; i++)
    {
        int octalNum = 0;
        int placeValue = 1;
        int num = i;

        while (num > 0)
        {
            int remainder = num % 8;
            octalNum += remainder * placeValue;
            num /= 8;
            placeValue *= 10;
        }

        printf("%d ", octalNum);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("n: ");
    scanf("%d", &n);

}