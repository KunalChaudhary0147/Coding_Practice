#include <stdio.h>

int main()
{
    float base, height;

    printf("Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);

    printf("Area of triangle is: %.2f\n", base * height/2);
    return 0;
}