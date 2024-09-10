#include<stdio.h>
int main()
{
    int a=1,b=1,n;
    printf("enter value n:");
    scanf("%d",&n);
    while(a<=n)
    {
        b=b*a;
        a=a+1;
    }
    printf("b=%d",b);
}