#include <stdio.h>

int main()
{
    int n;

    printf("Enter height of diamond (odd): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i < (n+1)/2)
        {
            for (int j = 1; j <= (n+1)/2-i; j++)
            printf(" ");

            for (int j = 1; j <= (2*i - 1); j++)
            printf("*");
        }
        else if (i == (n+1)/2)
        {
            for (int j = 1; j <= n; j++)
            printf("*");
        }

        else
        {
            for (int j = 1; j <= i-(n+1)/2; j++)
            printf(" ");

            for (int j = 1; j <= (2*(n-i) + 1); j++)
            printf("*");
        }
        printf("\n");
    }
    return 0;
}