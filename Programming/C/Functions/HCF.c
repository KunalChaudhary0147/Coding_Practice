#include <stdio.h>

void HCF (int a, int b)
{
    if (a<b)
    {
        for (int i = a; i > 0; i--)
        {
            if (a%i == 0 && b%i == 0)
            {
                printf("HCF of %d and %d is: %d", a, b, i);
                break;
            }
            else continue;
        }

        
    }

    else HCF(b, a);
}

int main()
{
    int a, b;
    printf("Enter a and b:");
    scanf("%d %d", &a, &b);

    HCF(a, b);

    return 0;
}