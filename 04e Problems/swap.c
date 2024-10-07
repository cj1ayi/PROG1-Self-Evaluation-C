#include<stdio.h>


void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y; 
    *y = temp;
}

int main()
{
    int x, y;

    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    
    swap(&x, &y);

    printf("x is now: %d\n", x);
    printf("y is now: %d\n", y);

}