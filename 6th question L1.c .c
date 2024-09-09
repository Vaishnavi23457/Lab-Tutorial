#include<stdio.h>
int main()
{
    int a,b,c;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    c = a+b;
    b = c-b;
    a = c-b;
    printf("\n a=%d",a);
    printf("\n b=%d",b);
}