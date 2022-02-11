#include <stdio.h>

int main()
{
    int ang1, ang2, ang3, sum;

    /* Input all three angles of triangle */
    printf("Enter three angles of triangle \n");
    scanf("%d%d%d", &ang1, &ang2, &ang3);

    /* Calculate sum of angles */
    sum = ang1 + ang2 + ang3; 

    /* If sum of angles is 180 and ang1, ang2, ang3 is not 0 then triangle is valid */
    if(sum == 180 && ang1 > 0 && ang2 > 0 && ang3 > 0) 
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}