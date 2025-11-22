 #include <stdio.h>

int main()
{
    int a;
    float b;
    
    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a float: ");
    scanf("%f", &b);

    // Implicit conversion
    printf("Result of adding integer and float (implicit conversion): %.2f\n", a + b);

    printf("Result of adding integer and float (implicit conversion): %d\n", a + b);

    // Explicit conversion
    printf("Result of adding integer and float (explicit conversion): %.2f\n", (float)a + b);

    printf("Result of adding integer and float (implicit conversion): %d\n", a + (int)b);

    return 0;
}