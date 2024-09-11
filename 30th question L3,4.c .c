#include <stdio.h>
int main()
{
    int num=12345,rem,sum=0;
    while(num!=0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    printf("sum=%d",sum);
}