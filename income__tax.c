#include <stdio.h>
int main()
{
    float total_income;
    float tax, amount;

    printf("enter total_income");
    scanf("%f", &total_income);

    if (total_income <= 250000)
    {
        printf("zero income tax");
        /* code */
    }

    else if (total_income > 250000 && total_income <= 500000)
    {
        amount = 0.05 * (total_income - 250000);
        /* code */
    }

    else if (total_income > 500000 && total_income <= 1000000)
    {
        amount = 0.2 * (total_income - 500000) + (0.05 * total_income);
        /* code */
    }

    else
    {
        amount = 0.3 * (total_income - 1000000) + (0.2 * 500000) +
                 (0.05 * 250000);
        /* code */
    }
    printf("total_income tax%f", amount);

    return 0;
}