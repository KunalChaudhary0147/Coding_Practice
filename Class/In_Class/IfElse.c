#include <stdio.h>

int main ()
{
    int rollno;
    
    printf("Enter your roll number: ");
    scanf("%d", &rollno);

    if (rollno % 2 != 0) printf("STAND UP.\n") ;

    else printf ("Come near WB.\n") ;
        
    return 0;
}