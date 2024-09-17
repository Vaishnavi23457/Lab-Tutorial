#include<stdio.h>
int main ()
{
    int a, sum=0,n;
    printf("number=");
    scanf("%d",&n);
    for(a=1; a<=n; a++)
    {
        sum=a+sum;
    }
    printf("sum=%d",sum);
}