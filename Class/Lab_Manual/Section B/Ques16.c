#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num%15 == 0) printf("%d is divisible by both 3 & 5", num);

    else printf("%d is not divisible by both 3 & 5", num);
    
    return 0;
}