#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int mid = (n + 1) / 2;

        for (int j = 1; j <= n; j++)
        {
            if (j == mid || i == mid)
                printf("*");

            else
                printf(" ");
        }
        
        printf("\n");
    }
    
    return 0;
}