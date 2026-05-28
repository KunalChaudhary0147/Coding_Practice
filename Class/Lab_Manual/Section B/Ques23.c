#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the coefficients of quadratic equation i.e a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (b*b-4*a*c > 0) 
        printf("Roots are Real and Unequal.");

    else if (b*b-4*a*c == 0) 
        printf("Roots are Real and Equal.");

    else 
        printf("Roots are Imaginary.");
        
    return 0;
}