#include<stdio.h>


int loanApproval(int amt, int ms, int md, char stat, int yrs)
{
    if (amt <= (2 * ms) && md < (0.3 * ms) && (stat == 'R' || yrs > 3))
        return 1;
    else if (amt > 3 * ms && md > 0.4 * ms)
        return 0;
    else
        return -1;
}

int main()
{
    int amt, ms, md, yrs;
    char stat;

    printf("Enter loan amount being applied for: ");
    scanf("%d", &amt);

    printf("Enter monthly salary: ");
    scanf("%d", &ms);

    printf("Enter monthly deductions: ");
    scanf("%d", &md);

    printf("Enter status (R/C): ");
    scanf(" %c", &stat);

    printf("Enter years of service on current job: ");
    scanf("%d", &yrs);

    int result = loanApproval(amt, ms, md, stat, yrs);

    if (result == 1)
        printf("Credit Accepted\n");
    else if (result == 0)
        printf("Credit Rejected\n");
    else
        printf("Review Required\n");

    return 0;
}