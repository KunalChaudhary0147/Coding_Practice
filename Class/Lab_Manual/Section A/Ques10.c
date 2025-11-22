#include <stdio.h>

int main()
{
    float num1, num2;

    printf("Enter number1 and number2: ");
    scanf("%f %f", &num1, &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("Number 1 after swapping: %.2f\n", num1);
    printf("Number 2 after swapping: %.2f\n", num2);

    return 0;
}