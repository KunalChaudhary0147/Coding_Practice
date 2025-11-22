#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int mid=n;

        for (int j = 1; j <= (2*n - 1); j++)
        {
            if (j <= mid-i || j >= mid+i) printf(" ");
            
            else printf("*");
        }
        
        printf("\n");
    }
    return 0;
}