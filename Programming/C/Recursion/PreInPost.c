#include <stdio.h>

void PreInPost(int x)
{
    if (x==0) return;

    printf("Pre: %d\n", x);
    PreInPost(x-1);

    printf("In: %d\n", x);
    PreInPost(x-1);

    printf("Post: %d\n", x);
    
    return;
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    PreInPost(n);

    return 0;
}