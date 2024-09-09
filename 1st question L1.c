#include<stdio.h>
int main()
{
    int P,R,T, SI;
    printf("P=");
    scanf("%d", &P);
    printf("R=");
    scanf("%d", &R);
    printf("T=");
    scanf("%d", &T);
    SI =(P*R*T)/100;
    printf("SI=%d",SI);
    return 0;
}