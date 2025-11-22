#include <stdio.h>

int main()
{
    int n;

    printf("Enter no. of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int k = 1;
        for (int j = 1; j < 2*n; j++)
        {
            if (i==0)
            {
                if (j < n-i) printf("%d", k++);
                else if (j == n-i )printf("%d", k);
                else if (j > n-i) printf("%d", --k);
                continue;
            }
            else if (j <= n-i) printf("%d", k++);
            else if (j >= n+i) printf("%d", --k);
            else printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}