43#include<stdio.h>
int main ()
{ 
    int a,b,sal;
    printf("sales=");
    scanf("%d", &sal);
    if(sal<=500)
     a= sal*5/100;
     else if(500<sal&& sal<=2000)
     a=sal*10/100 +35;
     else if (2000<sal && sal<= 5000)
     a= 185+ sal*12/100;
     else if (5000<sal)
     a= sal*12.5/100;
     printf("a=%d",a);
}