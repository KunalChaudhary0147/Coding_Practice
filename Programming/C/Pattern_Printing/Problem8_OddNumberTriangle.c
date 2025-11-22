#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = 1;

        for (int j = 1; j <= i; j++)
        {
            if (a % 2 != 0)
                printf("%d ", a);
            
            else
                continue;

            a += 2;
        }
        
        printf("\n");
    }
    
    return 0;
}