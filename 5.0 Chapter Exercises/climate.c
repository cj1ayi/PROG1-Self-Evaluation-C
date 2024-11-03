#include <stdio.h>

int main() {
    int temp;
    printf("Enter temperature: ");
    scanf("%d", &temp);

    if (temp < 20)
        printf("IT'S COLD!");
    else if (temp > 30)
        printf("IT'S HOT!");
    else 
        printf("COOL CLIMATE!");
    
    return 0;
}