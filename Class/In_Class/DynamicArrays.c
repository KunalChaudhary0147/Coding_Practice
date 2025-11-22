#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n, new;
    scanf("%d", &n);

    int* scores;

    scores = (int*) calloc (n, sizeof(int));

    for (int i = 0; i < n-2; i++) scanf("%d", &scores[i]);
    printf("\n");
    for (int i = 0; i < n; i++) printf("%d ", scores[i]);
    printf("\n");

    printf("New: ");
    scanf("%d", &new);

    n+=new;

    scores = (int*) realloc (scores, 8 * sizeof(int));

    for (int i = n; i < new; i++) scanf("%d", &scores[i]);
    printf("\n");
    for (int i = 0; i < new; i++) printf("%d ", scores[i]);

    return 0;
}