#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter first side of triangle: ");
    scanf("%d", &a);

    printf("Enter second side of triangle: ");
    scanf("%d", &b);

    printf("Enter third side of triangle: ");
    scanf("%d", &c);

    if (a <= 0 || b <= 0 || c <= 0)               // Check if any of the sides is non-positive
    {
        printf("Please enter positive lengths only.\n");
        return 1; // Exit the program with an error code
    }

    else if (a + b > c && a + c > b && b + c > a)                  // Check triangle inequality
    {
        printf("Valid sides of a triangle.\n");
    }
    
    else                                                            // If the above condition is false, they cannot form a triangle
    {
        printf("Invalid sides of a triangle.\n");
    }
    return 0;
}