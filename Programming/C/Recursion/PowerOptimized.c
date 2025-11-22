#include <stdio.h>

int power(int a, int b)
{
    if (b == 0)  return 1;
    
    if (b == 1)  return a;

    int halfPower = power(a, b / 2);

    if (b%2 == 0) return halfPower * halfPower;
    else return a * halfPower * halfPower;
}

int main()
{
    int a, b;
    printf("Enter the base and exponent: ");
    scanf("%d %d", &a, &b);

    printf("%d to the power of %d is: %d\n", a, b, power(a, b));

    return 0;
}