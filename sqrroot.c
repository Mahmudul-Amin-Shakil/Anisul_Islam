#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=7;
    printf ("enter the value of N :");
    scanf ("%d",&n);
    if (n-(a*a)==0)
    {
        printf ("it is perfect square");
    }
    else
    {
        printf ("it is not perfect square");
    }
    return 0;
}
