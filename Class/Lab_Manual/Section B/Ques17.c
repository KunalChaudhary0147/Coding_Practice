#include <stdio.h>

int main()
{
    char x;

    printf("Enter the letter: ");
    scanf("%c", &x);

    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E'|| x == 'I' || x == 'O' || x == 'U') printf("%c is a Vowel.", x);
    else printf("%c is a Consonant.", x);
    
    return 0;
}