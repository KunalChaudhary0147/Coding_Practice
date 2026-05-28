#include <stdio.h>
#include <math.h>

int main()
{
    int n, z, count = 0;
    int arm = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    z = n;

    while (z > 0)
    {
        count++;
        z /= 10;
    }

    z = n;

    while (z > 0)
    {
        arm = ceil(arm + pow(z%10, count));
        z /= 10;
    }

    arm == n ? printf("%d It is Armstrong.", arm) : printf("It is not Armstrong.");

    return 0;
}