#include <stdio.h>

int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    int *x = &a;
    
    printf("%p\n", &x); // x ka address print
    printf("%p\n", &a); // a ka address print
    printf("%p\n", x); // x mai jo value h for now, it is address h vo print
    printf("%d\n", *x); // x pointer mai jo address h uss pr jo value h vo print

    return 0;
}