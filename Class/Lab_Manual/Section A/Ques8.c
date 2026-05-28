#include <stdio.h>

int main()
{
    int itemno, quantity;
    float unitprice;

    printf("Enter item number, quantity and unit price: ");
    scanf("%d %d %f", &itemno, &quantity, &unitprice);

    printf("Amount before discount: %.2f\n", quantity * unitprice);
    printf("Amount after discount: %.2f\n", quantity * unitprice - (quantity * unitprice / 5));
    return 0;
}