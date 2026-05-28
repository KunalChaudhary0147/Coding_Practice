#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three sides of triangle (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a==b && b==c) 
        printf("Equilateral triangle.\n");
    else if (a==b || b==c || a==c) 
        printf("Isosceles triangle.\n");
    else if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
        printf("Right angled triangle.\n");
    else 
        printf("Neither Equilateral nor Isosceles nor Right angled triangle.\n");
    return 0;
}