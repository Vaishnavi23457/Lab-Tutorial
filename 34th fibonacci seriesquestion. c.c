#include<stdio.h>
int main(){
    int a=0,b=1,c,i,n;
    printf("%d",a);
    printf("%d",b);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\n%d",c);
    }    
}    
