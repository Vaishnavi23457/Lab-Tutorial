#include <stdio.h>
int main()
{
    int num =121,rem,sum=0,temp;
    while(num!=0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    printf("sum=%d",sum);
    
    if (temp =sum){
        printf("\n num is a palindrome");
    }
    else{
        printf("\n not a palindrome");
    }
}