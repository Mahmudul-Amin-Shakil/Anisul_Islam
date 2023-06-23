#include<stdio.h>
int main()
{
    double c,f;
    printf ("enter the farenhite is :");
    scanf ("%lf",&f);
    c=5*(f-32)/9;
    printf ("the farenhite is :%.2lf",c);
    return 0;
}