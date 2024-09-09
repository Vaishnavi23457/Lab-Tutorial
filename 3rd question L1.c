#include<stdio.h>
int main()
{
    int Basicsalary,HRA,OA,Grosssalary;
    printf("Basicsalary =");
    scanf("%d",&Basicsalary);
    printf("HRA =");
    scanf("%d",&HRA);
    printf("OA =");
    scanf("%d",&OA);
    Grosssalary = Basicsalary+HRA+OA;
    printf("Grosssalary =%d",Grosssalary);
    return 0;
}