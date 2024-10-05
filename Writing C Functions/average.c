#include <stdio.h>

float getAverageOfTwoInts(int n1, int n2)
{
    return (n1+n2)/2.0;
}

int main()
{
    int n1, n2;
    float avg;

    printf("Enter int 1: ");
    scanf("%d", &n1);
    printf("Enter int 2: ");
    scanf("%d", &n2);

    avg = getAverageOfTwoInts(n1, n2);

    printf("Average: %.1f", avg);

    return 0;
}

/*
Description of Test Case
Accepts two integer inputs and display the average of the two ints.

Input	
5
10

Expected Output	
Average: 7.5

Actual Output	
Average: 7.5

Pass/Fail
Pass

*/

/*
Description of Test Case
Accepts two integer inputs and display the average of the two ints.

Input	
8
4

Expected Output	
6.0

Actual Output	
6.0

Pass/Fail
Pass

*/