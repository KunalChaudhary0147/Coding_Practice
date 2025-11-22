#include <stdio.h>

int main()
{
    float m1 = 100, m2 = 77, m3 = 92, m4 = 90, m5 = 86;
    float p = (m1 + m2 + m3 + m4 + m5) / 5;
    printf("Percentage = %.2f%%\n", p);                    // Using %% to print the % symbol
    return 0;
}