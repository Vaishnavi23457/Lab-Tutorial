#include<stdio.h>
int main()
{
    int a,i=1;
    printf("enter value a:");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        printf("\n %d",a*i);
    }
}