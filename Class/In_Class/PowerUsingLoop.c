#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter base and power: ");
    scanf("%d %d", &x, &y);

    int power = 1, i = 1;

    while (i <= y)
    {
        power = power * x;
        i++;
    }
    printf("%d raised to the power %d is %d\n", x, y, power);
    return 0;
}