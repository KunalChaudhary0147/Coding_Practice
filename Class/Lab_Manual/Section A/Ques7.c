#include <stdio.h>
#include <math.h>

int main()
{
    float base, height;

    printf("Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);

    printf("The longest side is: %.2f\n", sqrt((base * base) + height * height));
    return 0;
}