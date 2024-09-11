#include <stdio.h>
int main()
{
    int num,rem,sum=0,temp;
    printf("enter value of num:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    printf("sum=%d",sum);
    
    if (sum==num){
        printf("\n num is an amstrong number");
    }
    else{
        printf("\n not an amstorng number");
    }
}