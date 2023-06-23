#include<stdio.h>
int main()
{
    int n1=5,n2=7;
    n1=n1-n2;
    n2=n1+n2;
    n1=n2-n1;
    printf ("n1 is :%d\n",n1);
    printf ("n2 is :%d",n2);
    return 0;
}