#include <stdio.h>

int main()
{
    int nNum, nNum1, nNum2, nNum3;
    printf("Enter a number: ");
    scanf("%d",&nNum);

    nNum1 = (nNum / 100);
    nNum2 = (nNum % 100 / 10);
    nNum3 = (nNum % 10);

    printf("First Digit = %d\n",nNum1);
    printf("Middle Digit = %d\n",nNum2);
    printf("Last Digit = %d\n",nNum3);

    return 0;

}