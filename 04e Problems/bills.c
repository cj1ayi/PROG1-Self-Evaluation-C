#include <stdio.h>


int main()
{
    int nAmt;

    printf('Enter Amount: ');
    scanf("%d",&nAmt);

    printf("P 1000: %d\n", nAmt / 1000);    
    nAmt %= 1000;
    printf("P 500: %d\n", nAmt / 500);    
    nAmt %= 500;
    printf("P 200: %d\n", nAmt / 200);    
    nAmt %= 200;
    printf("P 100: %d\n", nAmt / 100);    
    nAmt %= 100;
    printf("P 50: %d\n", nAmt / 50);    
    nAmt %= 50;
    printf("P 220: %d\n", nAmt /20);    
    nAmt %= 20;
    printf("P 10: %d\n", nAmt / 10);    
    nAmt %= 10;
    printf("P 5: %d\n", nAmt / 5);    
    nAmt %= 5;
    printf("P 1: %d\n", nAmt);    

    return 0; 
}