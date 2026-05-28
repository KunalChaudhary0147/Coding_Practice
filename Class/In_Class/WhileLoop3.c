#include <stdio.h>

int main()
{
    int num, i = 1;

    printf("Enter a no. of times: ");
    scanf("%d", &num);

    while (i <= num)
    {
        printf("%d. Section C\n", i);
        i++;
    }
    
    return 0;
}