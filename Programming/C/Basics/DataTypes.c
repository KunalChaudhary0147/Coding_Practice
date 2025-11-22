#include <stdio.h>

int main()
{
    int a = 9;
    int b = 2;
    printf("Arthmetic Operators on a and b 'add' %d, 'subtract' %d,'multiply' %d, 'divide' %d, 'remainder' %d\n", a + b, a - b, a * b, a / b, a % b);    //% is the remainder operator called modulus operator.
    
    float c = 9;
    float d = 2;
    printf("\nArthmetic Operators on c and d 'add' %f, 'subtract' %f, 'multiply' %f, 'divide' %f\n", c + d, c - d, c * d, c / d);    //float does not support remainder operator because it is used for decimal values (one value completely divides the other) and remainder operator is used for integer values
    return 0;
}