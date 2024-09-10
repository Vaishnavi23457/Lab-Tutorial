#include <stdio.h>
int main()
{
    int a,b,c,largest;
   printf("\n a=,b=, c=");
   scanf("%d%d%d", &a,&b, &c);
   largest= (a>b)?((a>c)?a:c):((b>c)?b:c);((c>b)? b:c);
   printf("largest number=%d",largest);
}