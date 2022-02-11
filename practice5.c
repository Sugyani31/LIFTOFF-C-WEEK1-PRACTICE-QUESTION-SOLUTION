/* program to calculate total, average and percentage of five subjects*/

#include <stdio.h>

int main()
{
    int eng, phy, chem, math, comp; 
    float total, average, percentage;

    /* Input marks of all five subjects */
    printf("Enter marks of five subjects \n");
    scanf("%d%d%d%d%d", &eng, &phy, &chem, &math, &comp);

    /* Calculate total, average and percentage */
    total = eng + phy + chem + math + comp;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    /* Print all results */
    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Percentage = %.2f", percentage);

    return 0;
}