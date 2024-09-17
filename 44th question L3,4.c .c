#include<stdio.h>
 int main()
 {
     float a,unit, paid;
     printf("unit=");
     scanf("%f", &unit);
     if(unit>0 && unit<=200)
     paid= 0.5*unit;
     else if(unit>=201 && unit<=400)
     paid= 100+ (unit-200)*.65;
     else if (unit>=401&& unit<=600)
     paid= 230+ (unit-400)*.8;
     else if (unit>600)
     paid= 425+ (unit-600)*1.25;
     printf("paid=%f" , paid);
 }
