#include<stdio.h>
int main()
{
    int sec=31558150,day,hrs,min;
    min = sec/60;
    hrs =min/60;
    day =hrs/24;
    printf("\n min =%d",min);
    printf("\n hrs =%d",hrs);
    printf("\n day =%d",day);
}