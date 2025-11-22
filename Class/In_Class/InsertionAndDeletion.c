#include <stdio.h>

void Deletion(int a[], int size)
{
    int pos;

    printf("\n\nEnter the position to delete element: ");
    scanf("%d", &pos);

    for (int i = pos; i < size; i++) a[i-1] = a[i];

    printf("\nArray after deletion:\n");
    for (int i = 0; i < size - 1; i++) printf("%d ", a[i]);
}

void Insertion(int a[], int size)
{
    int pos, val;

    printf("\n\nEnter the position to insert an element: ");
    scanf("%d", &pos);

    printf("Enter the value: ");
    scanf("%d", &val);

    for (int i = size; i >= pos - 1; i--) a[i+1] = a[i];

    a[pos - 1] = val;

    printf("\nArray after insertion:\n");
    for (int i = 0; i < size + 1; i++) printf("%d ", a[i]);
}

int main()
{
    int a[] = {10, 20, 25, 12, 19, 23, 15, 8, 3, 26};
    int n = sizeof(a) / sizeof(a[0]);

    int choice;
    printf("Choose an operation:\n1. Insertion\n2. Deletion\n");
    scanf("%d", &choice);

    printf("\nArray before operation:\n");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);

    if (choice == 1) Insertion(a, n);

    else Deletion(a, n);
    
    return 0;
}