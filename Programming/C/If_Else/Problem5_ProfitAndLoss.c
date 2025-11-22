#include <stdio.h>

int main()
{
    float cost_price, selling_price, profit, loss;

    printf("Enter Cost Price: ");
    scanf("%f", &cost_price);

    printf("Enter Selling Price: ");
    scanf("%f", &selling_price);

    if (selling_price > cost_price)
    {
        profit = selling_price - cost_price;
        printf("You made a profit of %.2f\n", profit);
    }

    else if (cost_price > selling_price)
    {
        loss = cost_price - selling_price;
        printf("You incurred a loss of %.2f\n", loss);
    }

    else
    {
        printf("No profit, no loss.\n");
    }
    
    return 0;
}