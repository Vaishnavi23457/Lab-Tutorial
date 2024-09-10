#include <stdio.h>
int main()
{
    int a, b, c;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d", &c);
    if (a>b && a>c)
    {
    printf("max a=%d", a);
    }
     else
     if (b>a && b>c)
     {
     printf("max b=%d", b);
     }
     else 
        {
         printf("max c=%d",c);
        }
}