#include <stdio.h>

int main()
{
    float a, b, sum;

    printf("Enter first number : ");
    scanf("%f", &a);

    printf("Enter second number : ");
    scanf("%f", &b);

    sum = a + b;

    printf("Sum = %.3f\n", sum);

    return 0;
}


/* Following can also be the code.
#include <stdio.h>
int main()
{
    float a, b, sum;

    printf("Enter first and second number : ");      // Input both numbers in a single line with space which is must between two numbers or using a enter after each input but can't use comma or anything else except space or enter.
    scanf("%f %f", &a, &b);

    sum = a + b;

    printf("Sum = %.3f\n", sum);

    return 0;
}*/