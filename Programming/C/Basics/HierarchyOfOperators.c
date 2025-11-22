#include <stdio.h>
int main()
{
    int i = 2*3/4 + 4/4 + 8 - 2 + 5/8;    // BODMAS rule and left to right evaluation.
    printf("%d", i);                      // % then B then D, M then A, S
    return 0;
}