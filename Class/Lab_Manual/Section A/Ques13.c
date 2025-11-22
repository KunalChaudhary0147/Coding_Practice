#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;

    printf("Enter the values of base and power: ");
    scanf("%d %d", &x, &y);

    printf("Base raised to the power is: %.2f", pow(x,y));
    
    return 0;
}