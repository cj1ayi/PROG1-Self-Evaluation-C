#include<stdio.h>


void displayAmount(float amount)
{
    printf("%.2f", amount);
}

int main()
{
    float amount;
    scanf("%f", &amount);
    displayAmount(amount);
    return 0;
}


/*
Description of Test Case
Inputs no decimal places

Input	
2

Expected Output	
2.00

Actual Output	
2.00

Pass/Fail
Pass

*/

/*
Description of Test Case
Inputs 2 decimal places

Input	
2.5

Expected Output	
2.50

Actual Output	
2.50
Pass/Fail
Pass

*/

/*
Description of Test Case
More than two decimal places input


Input	
6.30123

Expected Output	
6.30

Actual Output	
6.30

Pass/Fail
Pass

*/