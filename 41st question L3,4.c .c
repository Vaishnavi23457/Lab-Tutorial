#include<stdio.h>
int main()
{
    int n,a,i;
    printf("enter value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    if(n%i==0)
        printf("\n %d",i);
        else
       break;
    }
}