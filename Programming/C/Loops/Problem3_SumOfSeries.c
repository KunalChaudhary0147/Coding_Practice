#include <stdio.h>

int main()
{
    // 1 - 2 + 3 - 4 + 5 - 6 + .... n terms
    
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int result;
    // result = 0;

    // for (int i = 1; i <= n; i++)
    //     {
    //         if (i % 2 != 0)
    //             result += i;
            
    //         else
    //             result -= i;
    //     }

    if (n % 2 == 0)
        result = -(n / 2);

    else
        result = ((1 - n)/ 2) + n;

    printf("Result of the series is %d", result);

    return 0;
}