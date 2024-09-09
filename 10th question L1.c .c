#include<stdio.h>
int main()
{
    int CM,M,P,C,E;
    printf("Marks in Mathematics out of 200:");
    scanf("%d",&M);
    printf("P=");
    scanf("%d",&P);
    printf("C=");
    scanf("%d",&C);
    printf("E=");
    scanf("%d",&E);
    CM =M/2 + P/2 + C/2 +E;
    printf("CM= %d",CM);
}