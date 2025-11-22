#include <stdio.h>

void TowerOfHanoi (int n, char source, char helper, char destination)
{
    if (n==0) return;

    TowerOfHanoi(n-1, source, destination, helper);

    printf("%c -> %c\n", source, destination);

    TowerOfHanoi (n-1, helper, source, destination);

    return;
}

int main()
{
    int n;
    printf("Enter the number of discs: ");
    scanf("%d", &n);

    TowerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}