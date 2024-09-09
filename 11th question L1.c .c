#include<stdio.h>
int main()
{
    int HR,MIN,SEC,TotSEC;
    printf("HR =");
    scanf("%d",&HR);
    printf("MIN=");
    scanf("%d",&MIN);
    printf("SEC=");
    scanf("%d",&SEC);
    TotSEC=60*60*HR+60*MIN+SEC;
    printf("TotSEC= %d",TotSEC);
}