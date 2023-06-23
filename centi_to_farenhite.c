#include<stdio.h>
int main()
{
    double c,f;
    printf ("enter the celcius is :");
    scanf ("%lf",&c);
    f=9*c/5+32;
    printf ("the farenhite is :%.2lf",f);
    return 0;
}