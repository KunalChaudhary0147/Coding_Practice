#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 80) printf("A grade for %d marks.\n", marks);
    else if (marks >= 60) printf("B grade for %d marks.\n", marks);
    else if (marks >= 40) printf("C grade for %d marks.\n", marks);
    else if (marks >= 0) printf("F grade for %d marks.\n", marks);
    else printf("Invalid marks entered.\n");
    return 0;
}