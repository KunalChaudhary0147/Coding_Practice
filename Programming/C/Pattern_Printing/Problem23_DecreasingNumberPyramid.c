#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <=n; i++)
    {
        int a = 1;

        for (int j = 1; j <= (2*n - 1); j++)
        {
            if (j <= n - i || j >= n + i) printf(" ");

            else if (j >= n - i && j < n) printf("%d", a++);

            else if (j == n) printf("%d", a);

            else printf("%d", --a);
        }

        printf("\n");
    }
    return 0;
}