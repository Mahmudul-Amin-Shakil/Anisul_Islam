#include<stdio.h>
int main()
{
    int n1,n2,sum,avg;
    printf ("enter two number :");
    scanf ("%d%d",&n1,&n2);
    sum=n1+n2;
    printf ("the sum is :%d\n",sum);
    avg=sum/2;
    printf ("the avg is :%d",avg);
    return 0;
}