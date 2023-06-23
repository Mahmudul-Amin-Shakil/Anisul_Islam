#include <stdio.h>
int main()
{
    char lower,upper;
    printf ("enter a lower character :");
    scanf ("%c",&lower);
    upper=toupper(lower);
    printf ("%c",upper);
    return 0;
}
