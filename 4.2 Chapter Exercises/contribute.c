#include <stdio.h>

int main()
{
    int nGroup, nDrop;
    double cost, iniCost, addCost, finalCost;

    printf("Number of people in the group: ");
    scanf("%d",&nGroup);
    printf("Gift cost: ");
    scanf("%lf",&cost);
    printf("Number of people who dropped out: ");
    scanf("%d",&nDrop);

    iniCost = (cost / nGroup);

    if (nDrop > 0)
    {
        finalCost = (cost / (nGroup-nDrop));
        addCost = finalCost - iniCost;
    }
    else
    {
        finalCost = iniCost;
        addCost = 0;
    }

    printf("Original Contribution per person: %.2lf\n", iniCost);
    printf("Number of persons who dropped out: %d\n", nDrop);
    printf("Final Contribution per person: %.2lf\n", finalCost);
    printf("Additional Contribution per person: %.2lf\n", addCost);

    

}

